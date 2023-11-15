#include "main.h"
/**
 * **to_tokens - tokenize a string
 * @line: line of argument from stdin
 * Return: array of commands
 */
char **to_tokens(char *line)
{
	char *tok, *dup, **commands = NULL;
	char d[] = " \t\n";
	int count = 0;
	 i = 0;

	if (line == NULL)
		return (NULL);
	dup = _strdup(line);
	if (dup == NULL)
	{
		free(line);
		return (NULL);
	}
	tok = strtok(dup, d);
	if (tok == NULL)
	{
		free(line);
		free(dup);
		return (NULL);
	}
	while (tok)
	{
		count++;
		tok = strtok(NULL, d);
	}
	commands = malloc(sizeof(char *) * (count + 1));
	if (commands == NULL)
	{
		free(line);
		free(dup);
		return (NULL);
	}
	tok = strtok(line, d);
	while (tok)
	{
		commands[i++] = tok;
		tok = strtok(NULL, d);
	}
	commands[i] = NULL;
	free(dup);
	return (commands);
}
