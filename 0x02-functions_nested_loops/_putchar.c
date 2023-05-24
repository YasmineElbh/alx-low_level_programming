#include <stdio.h>
#include <unistd.h>

/**
 *  _putchar - print _putchar
 * Return: value
 * @n: value
 */
int _putchar(char n)
{
	return (write(1, &n, 1));
}
