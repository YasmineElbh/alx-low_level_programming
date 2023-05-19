#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program will assign a random number to the variable n
 * Return: positive if the number is greater than 0 otherwise negative
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
		printf("%d is zero\n", n);
	else if (n > 0)
		printf("%d is positive\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
