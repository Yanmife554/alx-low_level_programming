#incude "main.h"

/**
 * _strncpy - copies a string
 * @dest: char
 * @src: char
 * @n: int
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
