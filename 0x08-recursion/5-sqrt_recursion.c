#include "main.h"

/**
 * find_sqrt - find sqrt
 * @n: number
 * @f: find
 * Return: result
 */
int find_sqrt(int n, int f)
{
	if (f * f == n)
		return (f);
	else if (f * f > n)
		return (-1);
	else
		return (find_sqrt(n, f + 1));
}

/**
 * _sqrt_recursion - function that return natural sqrt
 * @n: number
 * Return: sqrt
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (find_sqrt(n, 0));
}
