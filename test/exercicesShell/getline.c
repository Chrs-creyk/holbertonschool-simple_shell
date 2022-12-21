#include "shell.h"

int _getline(void)
{
	char *buffer = malloc(1024);
	size_t len = 1024;

	while (1)
	{
		printf("$ ");
		getline(&buffer, len, stdin);
		printf("%s", buffer);
	}
	return (0);
}
