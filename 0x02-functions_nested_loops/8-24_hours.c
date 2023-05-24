#include "main.h"

/**
 * jack_bauer - function that print every minute of day
 * Return: 0 Always
 */
void jack_bauer(void)
{
	int h, m;

	m = 0;
	for (h = 0; h <= 23; h++)
	{
		while (m <= 59)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
			m++;
		}
	}
}
