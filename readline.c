#include "main.h"

/**
 * readline - read the stdin
 * Return: array of chars or nil
 */

char *readline(void)
{
	char *line = NULL;
	size_t len = 0;
	ssize_t n;

	if (isatty(STDIN_FILENO))
	{
		write(STDOUT_FILENO, "$ ", 2);
	}
	n = getline(&line, &len, stdin);
	if (n == -1)
	{
		free(line);
		return (NULL);
	}
	if (line[n - 1] == '\n')
	{
		line[n - 1] = '\0';
	}
	return (line);
}
