#include <stdio.h>
#include <unistd.h>

/**
 * main - program that print _putchar
 * Return: n
 */
int _putchar(char n)
{
	write(1, &n, 1);
}
