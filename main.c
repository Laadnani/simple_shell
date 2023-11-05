#include "main.h"

/**
 * main - activity
 * @argc: something about the count
 * @argv: something about the vectors
 * Return: well it depends but mostly 0
 */

int main(int argc, char **argv)
{
	char *inp = NULL;
	char **commands = NULL;
	int status = 0;
	(void) argc;

	while (1)
	{
		inp = readline();
		if (inp == NULL)
		{
			if (isatty(STDIN_FILENO))
			{
				write(STDOUT_FILENO, "\n", 1);
			}
			return (status);
		}
		commands = to_tokens(inp);
		if (commands == NULL)
		{
			continue;
		}
		status = _execute(commands, argv);
	}
}
