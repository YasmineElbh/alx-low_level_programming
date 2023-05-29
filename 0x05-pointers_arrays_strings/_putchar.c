#include <unistd.h>
#include "main.h"

/**
 * _putchar - create _putchar
 * @c: character
 * Return: value
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
