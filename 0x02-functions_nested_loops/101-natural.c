#include "main.h"
#include <stdio.h>

/**
 * main - natural numbers
 * Return: 0 Always
 */
int main(void)
{
	int a;
	int result = 0;

	for (a = 0; a <= 1023; a++)
	{
		if (a % 3 == 0 || a % 5 == 0)
		{
			result += a;
		}
	}
	printf("%d\n", result);
	return (0);
}
