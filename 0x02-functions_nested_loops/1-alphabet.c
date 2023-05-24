#include <stdio.h>
#include "main.h"
#include <unistd.h>

/**
 * print_alphabet - function that pint alphabet
 * Return - 0 Always
 */
void print_alphabet(void)
{
	char n;

	for (n = 97; n <= 122; n++)
		_putchar(n);
	_putchar('\n');
}
