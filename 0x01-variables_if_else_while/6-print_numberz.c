#include <stdio.h>

/**
 * main - print figit numbers of base 10
 * Return: 0 Always
 */
int main(void)
{
	int i;

	i = 0;
	while (i <= 9)
	{
		putchar(i + '0');
		i++;
	}
	putchar('\n');
	return (0);
}
