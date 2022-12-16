#include "shell.h"

char *_getenv(const char *name )
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
