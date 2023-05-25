#include <stdio.h>
#include "main.h"

/**
 * main - fibonacci
 * Return: 0 Always
 */
int main(void)
{
	long int a = 1;
	long int i = 3;
	long int j = 2;
	long int result;

	printf("%ld, %ld, ", a, j);
	while (i <= 50)
	{
		result = a + j;
		if (i < 50)
			printf("%ld, ", result);
		a = j;
		j = result;
		i++;
	}
	printf("\n");
	return (0);
}
