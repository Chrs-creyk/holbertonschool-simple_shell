#include <shell.h>

/**
 * main - prints all arguments without using ac
 * @ac: number of arguments in av
 * @av: array of strings (arguments)
 */

int _av(int ac __attribute__((unused)), char **av)
{
	int i;

	for (i = 0; av[i] != NULL; i++)
	{
		printf("%s\n", av[i]);
	}
	return (0);
}
