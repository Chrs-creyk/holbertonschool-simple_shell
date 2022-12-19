#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>

typedef struct builtins
{
	char *name;
	void (*f)(vars_t *);
} builtins_t;

extern char **environ;

char *_searchpath(char *com);
char *_getenv(char *name);
void freeArr(char *arr[]);
int _strcmp(char *s1, char *s2);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
int main(void);
int _av(int ac, char **av);

#endif
