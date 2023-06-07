#include "main.h"
#include "unistd.h"

/**
 * _putchar - create _putchar
 * @c: character
 * Return: 0 Always
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
