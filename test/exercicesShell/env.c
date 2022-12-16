#include <shell.h>

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
