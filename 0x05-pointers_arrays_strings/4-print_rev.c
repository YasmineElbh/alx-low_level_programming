#include "main.h"

/**
 * _strlen - function strlen
 * @str: string
 * Return: result
 */
int _strlen(char *str)
{
	int k = 0;

	while (str[k])
		k++;
	return (k);
}

/**
 * print_rev - a function that print string in reverse
 * @s: string
 * Return: result
 */
void print_rev(char *s)
{
	int i, b;
	char a;

	b = _strlen(s);
	for (i = 0; i < b / 2; i++)
	{
		a = s[i];
		s[i] = s[b - i - 1];
		s[b - i - 1] = a;
	}
	for (i = 0; i < b; i++)
		_putchar(s[i]);
	_putchar('\n');
}
