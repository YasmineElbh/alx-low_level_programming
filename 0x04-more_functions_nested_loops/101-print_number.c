#include "main.h"

/**
 * print_number - print integer
 * @n: number
 * Return: result
 */
void print_number(int n)
{
	int i = 1;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / i >= 10)
	{
		i = i * 10;
	}
	if (i > 0)
	{
		_putchar (n / i + '0');
		n %= (i / 10);
	}
}
