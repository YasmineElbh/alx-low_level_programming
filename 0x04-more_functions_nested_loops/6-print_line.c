#include "main.h"

/**
 * print_line - function that draws a straight line
 * @n: value
 * Return: result
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n && n > 0; i++)
	{
		_putchar('_');
	}
		_putchar('\n');
}
