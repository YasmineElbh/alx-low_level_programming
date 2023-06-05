#include "main.h"

/**
 * char *_memcpy - function that copies memory area
 * @dest: destination
 * @src: source
 * @n: value
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
