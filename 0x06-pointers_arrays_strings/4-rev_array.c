#include "main.h"

/**
 * reverse_array - reverse the content of array
 * @a: array
 * @n: number
 * Return: reverse
 */
void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n / 2; i++)
	{
		j = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = j;
	}
}
