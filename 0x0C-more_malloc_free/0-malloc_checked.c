#include "main.h"
#include <stdlib.h>

/**
 * void *malloc_checked - function that allocate memory
 * @b: byte
 * Return: result
 */
void *malloc_checked(unsigned int b)
{
	void *str;

	str = malloc(b);
	if (!str)
		exit(98);
	return (str);
}
