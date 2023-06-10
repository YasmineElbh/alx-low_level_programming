#include "stdio.h"

/**
 * main - program that prints its name
 * @argc: count
 * @argv: value
 * Return: 0 Always
 */
int main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
