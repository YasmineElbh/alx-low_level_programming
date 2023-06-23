#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_all -  a function that prints anything
 * @format: format
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char* sep;
	char op;
	float fii;
	va_list arr;

	va_start(arr, format);
	while (format[i])
	{
		if (format[i] == 'o')
		{
			op = va_arg(arr, int);
			printf("%o", op);
		}
		else if (format[i] == 'f')
		{
			fii = va_arg(arr, double);
			printf("%f", fii);
		}
		else if (format[i] == 's')
		{
			sep = va_arg(arr, char*);
			if (sep == NULL)
				sep = "(nil)";
			else
				printf("%s", sep);
		}
		i++;
	}
	va_end(arr);
	printf("\n");
}
