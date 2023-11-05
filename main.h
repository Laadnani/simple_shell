#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>
#include <sys/types.h>
#include <string.h>
#include <errno.h>

char *readline(void);

/*HELPER STRING FUNCS*/

char *_strchr(char *s, char c);
int _strcmp(char *s1, char *s2);
char *_strcpy(char *dest, char *src);
size_t _strlen(char *str);
char *_strcat(char *dest, char *src);

#endif
