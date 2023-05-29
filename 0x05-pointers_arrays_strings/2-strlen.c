#include "main.h"

/**
 * _strlen - function that return length of string
 * @s: string
 * Return: result
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}
