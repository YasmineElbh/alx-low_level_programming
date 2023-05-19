#include <stdio.h>

/**
 * main - print lowecase and uppercase alphabet
 * Return: 0 Always
 */
int main(void)
{
	int i, j;

	i = 97;
	j = 65;
	while (i != 123)
	{
		putchar(i);
		i++;
	}
	while (j != 91)
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
