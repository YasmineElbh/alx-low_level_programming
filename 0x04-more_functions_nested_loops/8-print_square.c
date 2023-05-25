#include "main.h"

/**
 * print_square - function that print square
 * @size: value
 * Return: result
 */
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
				_putchar(35);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
