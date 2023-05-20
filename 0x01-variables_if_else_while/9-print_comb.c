#include <stdio.h>

/**
 * main - program that print all possible combination of single digit numbers
 * Return: ) Always
 */
int main(void)
{
	int i;

	i = 0;
	while (i <= 9)
	{
		putchar(i + '0');
		if (i != 9)
		{
			putchar(' ');
			putchar(',');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
