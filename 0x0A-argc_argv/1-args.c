#include "stdio.h"

/**
 * main - program that prints te number of arg
 * @argc: count
 * @argv: value
 * Return: 0 Always
 */
int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
