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
 * rev_string - function that reverse sting
 * @s: string
 * Return:result
 */
void rev_string(char *s)
{
	char a;
	int i, j;

	a = _strlen(s);
	for (i = 0; i < a / 2; i++)
	{
		j = s[i];
		s[i] = s[a - i - 1];
		s[a - i - 1] = j;
	}
}
