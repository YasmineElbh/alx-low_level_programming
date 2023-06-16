#include "main.h"
#include <stdlib.h>

/**
 * void *_calloc - function that allocates memory for an array
 * @nmemb: momory array
 * @size: size byte
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *str;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	str = malloc(nmemb * size);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		str[i] = 0;

	return (str);
}
