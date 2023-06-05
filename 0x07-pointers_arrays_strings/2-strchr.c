#include "main.h"

/**
 * char *_strchr - function that locates character in string
 * @s: string
 * @c: character
 * Return: pointer to the first character in string
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	return ('\0');
}
