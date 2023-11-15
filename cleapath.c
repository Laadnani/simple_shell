#include "main.h"

/**
 * clearpath - free a string from mem
 * @str: an array to free
 */

void clearpath(char **str)
{
	int i = 0;

	if (!str || !(*str))
	{
		return;
	}
	while (str[i])
	{
		free(str[i]);
		str[i] = NULL;
		i++;
	}
	free(str);
}
