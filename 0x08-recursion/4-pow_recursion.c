#include "main.h"

/**
 * _pow_recursion - function that return value
 * @x: value 1
 * @y: value 2
 * Return: power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x = x * _pow_recursion(x, y - 1));
}
