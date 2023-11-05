/**
 * *_strcat - concat 2 strings
 * @dest: string to concat into
 * @src: string to be added at the end of dest
 * Return: concated dest + src
*/
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int dest_len = _strlen(dest);
	int src_len = _strlen(src);

	if (dest_len + src_len + 1 > BUFFER)
	{
		return (NULL);
	}
		while (src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
