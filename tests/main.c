#include "main.h"

/**
 * main - checks if a path is avaialbe
 *Return: value needed
 */
int main(int ac, char **av)
{
	int i;
	int value = 0;

	value = _which(ac, av);
	return (value);
}
