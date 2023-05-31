#include "unistd.h"
#include "main.h"

/**
 * _putchar - create _putchar
 * Return: c
 * @c: value
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
