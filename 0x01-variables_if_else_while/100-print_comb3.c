#include <stdio.h>

/**
 * main - program that prints all possible different combination of two digits
 * Return: 0 Always
 */
int main(void)
{
	int i = 0;
	int j;

	for (; i <= 8; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (i != 8 || j != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
