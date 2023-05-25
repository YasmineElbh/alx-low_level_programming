#include "main.h"

/**
 * print_number - print integer
 * @n: number
 * Return: result
 */
void print_number(int n)
{
	int div = 1;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n == 0)
	{
		_putchar('0');
	}
	if (n / div >= 10)
		div *= 10;
}
