#include "main.h"

/**
 * print_triangle - a function that print triangle
 * @size: size
 * Return: result
 */
void print_triangle(int size)
{
	int a, b, c;

	if (size > 0)
	{
		for (a = 1; a <= size; a++)
		{
			for (b = a - size; b >= 1; b--)
				_putchar(32);
			for (c = 1; c <= a; c++)
				_putchar(35);
			_putchar('\n');
		}
	}
	_putchar('\n');
}
