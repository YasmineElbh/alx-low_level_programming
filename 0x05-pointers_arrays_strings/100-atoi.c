#include "main.h"

/**
 * _atoi - atoi
 * @s: string
 * Return: result
 */
int _atoi(char *s)
{
	int i = 0;
	int a = 0;
	int b = 1;
	unsigned int result = 0;

	while (s[i])
	{
		if (s[i] == '-')
			b *= -1;
		while (s[i] >= '0' && s[i] <= '9')
		{
			a = 1;
			result *= 10;
			result += s[i] - 48;
			i++;
		}
		if (a == 1)
			break;
		i++;
	}
	return (result * a);
}
