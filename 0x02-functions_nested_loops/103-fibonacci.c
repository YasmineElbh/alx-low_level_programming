#include <stdio.h>
#include "main.h"

/**
 * main - fibonacci
 * Return: 0 Always
 */
int main(void)
{
	long int a = 1;
	long int i = 2;
	long int j = 2;
	long int result = a + i;

	while (i <= 4000000)
	{
		if (result % 2 == 0)
			j += result;
		a = i;
		i = result;
	}
	printf("%ld\n", j);
	return (0);
}
