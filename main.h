#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>
#include <sys/types.h>
#include <string.h>
#include <stddef.h>
#include <errno.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <fcntl.h>
extern char **environ;
char *readline(void);
char **to_tokens(char *line);
int _execute(char **args, char **path);
void clearpath(char **str);

/*HELPER STRING FUNCS*/

char *_strchr(char *s, char c);
int _strcmp(char *s1, char *s2);
char *_strcpy(char *dest, char *src);
int _strlen(const char *str);
char *_strcat(char *dest, char *src);
char *_strdup(const char *str);

#endif
