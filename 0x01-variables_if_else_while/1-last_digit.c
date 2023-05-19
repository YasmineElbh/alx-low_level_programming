#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - tha last digit
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0 && n % 10 != 0)
		printf("last digit %d is %d and is greater than 5\n", n, n % 10);
	else if (n < i && n % 10 != 0)
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
	else
		printf("last digit of %d is 0\n", n);
	return (0);
}
