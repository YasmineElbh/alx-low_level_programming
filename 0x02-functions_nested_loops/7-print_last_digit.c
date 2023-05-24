#include "main.h"

/**
 * print_last_digit - function that print the last digit
 * @a: value
 * Return: value
 */
int print_last_digit(int a)
{
	int result;

	if (a < 0)
	{
		a *= -1;
	}
	result = a % 10;
	_putchar(result + 48);
	return (result);
}
