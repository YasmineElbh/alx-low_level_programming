#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: number
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int nm;
	va_list args;

	nm = 0;
	if (n == 0)
		return (0);
	va_start(args, n);
	while (i < n)
	{
		nm = nm + va_arg(args, int);
		i++;
	}
	va_end(args);
	return (nm);
}
