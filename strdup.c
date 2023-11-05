#include "main.h"

/**
 * *_strdup - duplicate a sting
 * @str: a sting to duplicate
 * Return: duplicated new string
 */

char *_strdup(const char *str)
{
	char *p;
	int i;
	int len = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len])
	{
		len++;
	}
	p = malloc(sizeof(char) * (len + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		p[i] = str[i];
	}
	p[i] = '\0';
	return (p);
}
