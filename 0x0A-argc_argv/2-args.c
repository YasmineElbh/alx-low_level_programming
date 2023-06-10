#include "stdio.h"

/**
 * main - program that print all arg it receives
 * @argc: count
 * @argv: value
 * Return: 0 Always
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n",  argv[i]);
	return (0);
}
