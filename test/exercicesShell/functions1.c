#include <shell.h>

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

void env(char **env)
{
	int i = 0;

	while (env[i])
	{
		write(1, env[i], _strlen(env[i]));
		printf('\n');
		i++;
	}
}
