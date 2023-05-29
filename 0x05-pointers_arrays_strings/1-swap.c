#include "main.h"

/**
 * swap_int - a function that swap the values
 * @a: value 1
 * @b: value 2
 * Return: value
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
