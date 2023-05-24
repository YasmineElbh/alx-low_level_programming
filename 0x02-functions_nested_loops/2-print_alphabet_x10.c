#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * print_alphabet_x10 - print 10 times the alphabet
 * Return: value
 */
void print_alphabet_x10(void)
{
	char n;
	int j = 0;

	while (j <= 10)
	{
		for (n = 97;  n <= 122; n++)
		{
			_putchar(n);
		}
		_putchar('\n');
		j++;
	}
}
