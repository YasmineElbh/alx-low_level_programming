#include "main.h"

/**
 * more_numbers - print 10 times the numbers from 0 to 14
 * Return: result
 */
void more_numbers(void)
{
	int i, a;

	for (i = 0; i <= 9; i++)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a > 9)
				_putchar(a / 10 + '0');
			_putchar(a % 10 + '0');
		}
		_putchar('\n');
	}
}
