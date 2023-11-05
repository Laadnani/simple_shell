#include "main.h"

/**
 * _strlen - retrning the length of a string
 * @str: char to calculate length of
 * Return: int length of the string
 */

int _strlen(const char *str)
{
	int i = 0;

	while (str[i])
	{
		i++;
	}
	return (i);
}
