#ifndef _SHELL_H
#define _SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <limits.h>
#include <signal.h>

typedef struct variables
{
	char **av;
	char *buffer;
	char **env;
	size_t count;
	char **argv;
	int status;
	char **commands;
} vars_t;

typedef struct builtins
{
	char *name;
	void (*f)(vars_t *);
} builtins_t;

extern char **environ;

int _strcmp(char *s1, char *s2);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
char *_strdup(char *src);
int command_line(void);
int _execve(void);
char *_strcpy(char *dest, char *src);
int fork_wait_ex(void);
int _getpid(void);
int _wait(void);
void new_exit(vars_t *vars);
void _env(vars_t *vars);
char *_strcat(char *dest, char *src);
ssize_t _puts(char *str);
void new_setenv(vars_t *vars);
void new_unsetenv(vars_t *vars);
void (*check_for_builtins(vars_t *vars))(vars_t *vars);
int path_execute(char *command, vars_t *vars);
char *find_path(char **env);
int check_for_dir(char *str);
int execute_cwd(vars_t *vars);
void check_for_path(vars_t *vars);
void print_error(vars_t *vars, char *msg);
void _puts2(char *str);
char *_uitoa(unsigned int count);
char **tokenize(char *buffer, char *delimiter);
char **make_env(char **env);
void free_env(char **env);
void add_key(vars_t *vars);
char **find_key(char **env, char *key);
char *add_value(char *key, char *value);
int _atoi(char *str);
unsigned int check_match(char c, const char *str);
char *new_strtok(char *str, const char *delim);
int main(int argc __attribute__((unused)), char **argv, char **environment);
char **_realloc(char **ptr, size_t *size);
char *_getenv(char *name);
void _cmd(char *cmd, char **argv);

#endif
