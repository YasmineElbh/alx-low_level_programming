#include <stdio.h>

/**
 * main - print a lowercase alphabet in reverse
 * Return: O Always
 */
int main(void)
{
	char i;

	i = 'z';
	while (i != 'a')
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
