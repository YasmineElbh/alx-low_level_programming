#include "main.h"
#include <stdlib.h>

/**
 * int *array_range - function that creates an array of integers
 * @min: minimum array
 * @max: maximum array
 * Return: result
 */
int *array_range(int min, int max)
{
	int i, *s;

	if (min > max)
		return (NULL);

	s = malloc(sizeof(int) * (max - min + 1));
	if (s == NULL)
		return (NULL);
	i = 0;
	while (min <= max)
	{
		s[i] = min;
		min++;
		i++;
	}
	return (s);
}
