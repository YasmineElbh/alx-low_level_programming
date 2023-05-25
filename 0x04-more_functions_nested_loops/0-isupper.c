#include "main.h"

/**
 * _isupper - a function that checks for uppercase
 * @c: character
 * Return: 1 if character is uppercase otherwise 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
