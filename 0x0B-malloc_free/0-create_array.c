#include "main.h"
#include <stdlib.h>

/**
 * char *create_array - function that creates an array of chars
 * @size: size of character
 * @c: character
 * Return: pointer to array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
		return (NULL);

	i = 0;
	a = malloc(sizeof(char) * size);
	if (a == NULL)
		return (NULL);
	while (i < size)
	{
		a[i] = c;
		i++;
	}
	return (a);
}
