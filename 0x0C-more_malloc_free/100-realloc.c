#include "main.h"
#include <stdlib.h>

/**
 * void *_realloc - function that reallocates a memory block
 * @ptr: ptr
 * @old_size: old size
 * @new_size: new size
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *str;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == old_size)
		return (ptr);
	str = malloc(new_size);
	if (str == NULL)
		return (NULL);
	if (old_size > new_size)
		old_size = new_size;
	free(ptr);
	return (str);
}
