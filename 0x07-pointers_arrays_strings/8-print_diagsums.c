#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that print the sum
 * @a: value
 * @size: size
 */
void print_diagsums(int *a, int size)
{
	int i;
	int s1 = 0;
	int s2 = 0;

	for (i = 0; i < size; i++)
	{
		s1 += a[i * size + i];
		s2 += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", s1, s2);
}
