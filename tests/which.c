#include "main.h"

/**
 * main  - checks the stats of an environ path
 * Return : 0 on true value or -1
 */

int _which(int argc, char **argv)
{
	int i = 1;
	struct stat st;
	int n;

	if (argc < 2)
	{
		printf("usage : %s path_to_file ...\n", argv[0]);
	}
	while (argv[i])
	{
		n = stat(argv[i], &st);
		if (n == 0)
		{
			printf("%s : FOUND \n", argv[i]);
		}
		else
		{
			printf("%s : NOT FOUND \n", argv[i]);
		}
		i++;
	}
	return (n);
}
