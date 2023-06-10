#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - program that adds positive numb
 * @argv: value
 * @argc: count
 * Return: 0 Always
 */
int main(int argc, char **argv)
{
	int i;
	int j;
	int sum;
	int n;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	sum = 0;
	i = 1;
	while (i < argc)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
	n = atoi(argv[i]);

	if (n > 0)
		sum += n;
	i++;
	}

	printf("%d\n", sum);
	return (0);
}
