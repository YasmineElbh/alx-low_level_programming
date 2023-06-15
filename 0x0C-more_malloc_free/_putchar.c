#include "main.h"

/**
 * _putchar - creae _putchar
 * @c: character
 * Return: 0 Always
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
