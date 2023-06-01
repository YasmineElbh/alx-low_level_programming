#include "main.h"

/**
 * char *leet - encodes a string to 1337
 * @str: string
 * Return: result
 */
char *leet(char *str)
{
	int i, j;
	char a[] = "aA4eE3oO0tT7lL1";

	while (str[i] != '\0')
	{
		for (j = 0; j <= 19; j++)
		{
			if (str[i] == a[j])
				str[i] = a[j + 1];
		}
		i++;
	}
	return (str);
}
