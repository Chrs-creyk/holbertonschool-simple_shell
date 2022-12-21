#include "shell.h"

void new_exit(vars_t *vars)
{
	int status;

	if (_strcmpr(vars->av[0], "exit") == 0 && vars->av[1] != NULL)
	{
		status = _atoi(vars->av[1]);
		if (status == -1)
		{
			vars->status = 2;
			print_error(vars, ": Illegal number: ");
			_puts2(vars->av[1]);
			_puts2("\n");
			free(vars->commands);
			vars->commands = NULL;
			return;
		}
		vars->status = status;
	}
	free(vars->buffer);
	free(vars->av);
	free(vars->commands);
	free_env(vars->env);
	exit(vars->status);
}

void _env(char **env)
{
	int i = 0;

	while (env[i])
	{
		write(1, env[i], _strlen(env[i]));
		printf('\n');
		i++;
	}
}

void new_setenv(vars_t *vars)
{
	char **key;
	char *var;

	if (vars->av[1] == NULL || vars->av[2] == NULL)
	{
		print_error(vars, ": Incorrect number of arguments\n");
		vars->status = 2;
		return;
	}
	key = find_key(vars->env, vars->av[1]);
	if (key == NULL)
		add_key(vars);
	else
	{
		var = add_value(vars->av[1], vars->av[2]);
		if (var == NULL)
		{
			print_error(vars, NULL);
			free(vars->buffer);
			free(vars->commands);
			free(vars->av);
			free_env(vars->env);
			exit(127);
		}
		free(*key);
		*key = var;
	}
	vars->status = 0;
}

void new_unsetenv(vars_t *vars)
{
	char **key, **newenv;

	unsigned int i, j;

	if (vars->av[1] == NULL)
	{
		print_error(vars, ": Incorrect number of arguments\n");
		vars->status = 2;
		return;
	}
	key = find_key(vars->env, vars->av[1]);
	if (key == NULL)
	{
		print_error(vars, ": No variable to unset");
		return;
	}
	for (i = 0; vars->env[i] != NULL; i++)
		;
	newenv = malloc(sizeof(char *) * i);
	if (newenv == NULL)
	{
		print_error(vars, NULL);
		vars->status = 127;
		new_exit(vars);
	}
	for (i = 0; vars->env[i] != *key; i++)
		newenv[i] = vars->env[i];
	for (j = i + 1; vars->env[j] != NULL; j++, i++)
		newenv[i] = vars->env[j];
	newenv[i] = NULL;
	free(*key);
	free(vars->env);
	vars->env = newenv;
	vars->status = 0;
}
