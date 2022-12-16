#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *get_env_var(const char *name)
{
	extern char **environ;
	char **var;
	for (var = environ; *var != NULL; ++var)
	{
		if (strncmp(name, *var, strlen(name)) == 0)
		{
			char *value = *var + strlen(name);
			if (*value == '=')
			{
				return value + 1;
			}
		}
	}
	return NULL;
}

int main(int argc, char **argv)
{
	char *var = get_env_var("MY_VAR");
	if (var)
	{
		printf("MY_VAR is set to: %s\n", var);
	}
	else
	{
		printf("MY_VAR is not set\n");
	}
	return 0;
}
