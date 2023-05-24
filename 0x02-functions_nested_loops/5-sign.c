#include "main.h"

/**
 * print_sign - function that print sign
 * @n: value
 * Return: 1 if n  greater than 0 otherwise 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
