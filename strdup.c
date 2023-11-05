#include "main.h"

/** *_strdup - duplicate a sting
 * @str: a sting to duplicate
 * Return: duplicated new string
 */

char *_strdup(const char *str)
{
	char *p;
	int i = 0;
	int len = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (*str != '\0')
	{
		len ++;
		str++;
	}
	str = str - len;
	p = malloc(sizeof(char) * (len + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	for (; i <= len; i++)
	{
		p[i] = str[i];
	}
	return (p);
}
