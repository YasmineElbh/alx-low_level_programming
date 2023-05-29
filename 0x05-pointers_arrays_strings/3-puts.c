#include "main.h"

/**
 * _puts - function that prints a string
 * @str: string
 * Return: result
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
