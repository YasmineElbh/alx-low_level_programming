#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

/**
 * array_iterator - a function that executes a function given as a parameter
 * @array: array
 * @size: size
 * @action: action
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array != NULL && action != NULL)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
