#include <stdio.h>

/**
 * main - print alphabet
 * Return: 0 Always
 */
int main(void)
{
	int i;

	i = 97;
	while (i != 123)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
