#include <unistd.h>
#include "main.h"
#include <stdio.h>

/**
 * _putchar - create function _putchar
 * Return: value
 * @c: character
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
