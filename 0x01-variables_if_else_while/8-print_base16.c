#include <stdio.h>

/**
 * main - program print all the number of base 16 in lowercase
 * Return: 0 Always
 */
int main(void)
{
	int i = 0;
	char j = 'a';

	while (i <= 9)
	{
		putchar(i + '0');
		i++;
	}
	while (j <= 'f')
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
