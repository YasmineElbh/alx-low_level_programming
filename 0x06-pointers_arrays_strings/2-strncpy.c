#include "main.h"

/**
 * char *_strncpy - function that copies a string
 * @src: source
 * @dest: destination
 * @n: nbyte
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
