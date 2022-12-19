#include "shell.h"

/**
 * main - Main function for shell
 * @argc: Argument counter
 * @argv: Argument vector
 * Return: Always 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	char *prompt;
	size_t a;

	prompt = "($)";
	a = 1;
	init_shell(prompt, argv[0], a);
	return (0);
}
