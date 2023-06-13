#include "main.h"

/**
 * _putchar - create putchar
 * @c: character
 * Return: 0 Always
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
