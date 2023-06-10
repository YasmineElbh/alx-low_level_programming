#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prins the  minimum number
 * @argc: count
 * @argv: value
 * Return: 0 Always
 */
int main(int argc, char **argv)
{
	int cents = 0;
	int co;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	co = 0;

	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else
			cents -= 1;
		co++;
	}
	printf("%d\n", co);
	if (cents < 0)
		printf("0\n");
	return (0);
}
