#include <stdio.h>

/**
 * main - print alphabet except q and e
 * Return: 0 Always
 */
int main(void)
{
	int i;

	i = 97;
	while (i != 123)
	{
		if (i == 101 || i == 113)
		{
			i++;
		}
		else
		{
			putchar(i);
			i++;
		}
	}
	putchar('\n');
	return (0);
}
