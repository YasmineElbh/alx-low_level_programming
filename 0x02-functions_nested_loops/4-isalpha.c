#include "main.h"

/**
 * _isalpha - check for alphabetics
 * Return: 1 if c is letter otherwise 0
 * @c: character
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
