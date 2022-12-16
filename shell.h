#ifndef MAIN_H
#define MAIN_H

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <errno.h>
#include <stdarg.h>

extern char **environ;

char *_getenv(const char *name);
int _strcmp(const char *s1, const char *s2);
char *_strcpy(char *dest, char *src);


#endif
