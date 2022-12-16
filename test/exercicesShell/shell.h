#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>

extern char **environ;

int main(void);
int main(__attribute__((unused)) int ac, char **av);
char *_getenv(const char *name);

#endif