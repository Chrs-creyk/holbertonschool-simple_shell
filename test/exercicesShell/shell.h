<<<<<<< HEAD
#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(void);
int main(__attribute__((unused))int ac, char **av);
char *_getenv(const char *name);

=======
#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(void);
int main(__attribute__((unused))int ac, char **av);

>>>>>>> d6da912ee3d452a58ae9d44bf42c538713c96ed7
#endif