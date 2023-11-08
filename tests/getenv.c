#include "main.h"

char *_getenv(char *str)
{
	int i = 0;
	char *value;

	value = getenv(str);
	return (value);
}

int main(int ac, char **av, char **env)
{
	int i = 0;

}
