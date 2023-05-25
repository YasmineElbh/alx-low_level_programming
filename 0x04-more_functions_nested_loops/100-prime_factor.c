#include "main.h"
#include <stdio.h>

/**
 * main - prints and find thee largest primee factor
 * Return: 0 Always
 */
int main(void)
{
	unsigned long int i, n;

	n = 612852475143;
	for (i = 2; i <= n; i++)
	{
		if (i % n == 0)
			n = n / i;
		else
			i++;
	}
	printf("%lu\n", n);
	return (0);
}
