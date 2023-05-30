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
 * puts2 - function that prints every character of sring
 * @str: string
 * Return: esult
 */
void puts2(char *str)
{
	int i, j;

	j = _strlen(str);
	for (i = 0; i < j; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
