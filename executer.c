#include "main.h"

/**
 * _execute - take in array of args and path, fork the process and execute
 * @args: array of arguments
 * @path: a valid path
 * Return: nothing if the process is done or error otherwise
 */


int _execute(char **args, char **path)
{
	pid_t child_pid;
	int status;

	child_pid = fork();
	if (child_pid == -1)
	{
		perror("failed to fork process");
	}
	else if (child_pid == 0)
	{
		if (execve(args[0], args, environ) == -1)
		{
			perror(path[0]);
			clearpath(args);
			exit(0);
		}
	}
	else
	{
		waitpid(child_pid, &status, 0);
		clearpath(args);
	}
	return (WEXITSTATUS(status));
}
