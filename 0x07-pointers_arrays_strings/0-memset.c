#include "main.h"

/**
 * char *_memset - function that fils memory
 * @s: memore area
 * @b: constant byte
 * @n: byte
 * Returns: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
