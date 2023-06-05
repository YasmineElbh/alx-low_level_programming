#include "main.h"

/**
 * char *_strpbrk - function that search a string
 * @s: string
 * @accept: array accept
 * Return: pointer to the byte in s tha match one of byte on accept
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return (0);
}
