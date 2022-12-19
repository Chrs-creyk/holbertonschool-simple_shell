#include "shell.h"

/**
 * _getenv - Extracts an env variable from environ
 * @name: Variable name
 * Return: Pointer to variable name, or NULL if variable hasn't be found
 */

char *_getenv(char *name)
{
	char *e;
	int d, i, envlen;

	for (i = 0; environ[i]; i++)
	{
		envlen = strlen(environ[i]);
		e = malloc(sizeof(*e) * (envlen + 1));
		if (e == NULL)
			return (NULL);
		e = strcpy(e, environ[i]);
		e = strtok(e, "=");
		d = strcmp(name, e);
		if (d == 0)
		{
			free(e);
			return (environ[i]);
		}
		else
			free(e);
	}
	return (NULL);
}
