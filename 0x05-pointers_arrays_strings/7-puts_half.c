#include "main.h"

/**
 * _strlen - function strlen
 * @s: string
 * Return: result
 */
int _strlen(char *s)
{
	int k = 0;

	while (s[k])
		k++;
	return (k);
}

/**
 * puts_half - function that puts half of string
 * @str: string
 * Return: result
 */
void puts_half(char *str)
{
	int i, j;
	int a = 0;

	j = _strlen(str);
	if (a % 2 == 0)
		a = j / 2;
	for (i = a; i < j; i++)
		_putchar(str[i]);
	_putchar('\n');
}
