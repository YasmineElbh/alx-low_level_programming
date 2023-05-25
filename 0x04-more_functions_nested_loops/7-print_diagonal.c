#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line
 * @n: value
 * Return: result
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n && n > 0; i++)
	{
		for (j = 0; j < i; j++)
		{
			if (n >= 48 && n <= 57)
				_putchar(92);
			else
				_putchar(32);
		}
		_putchar('\n');
	}
}
