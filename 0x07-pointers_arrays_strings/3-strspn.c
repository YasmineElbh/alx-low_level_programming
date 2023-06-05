#include "main.h"

/**
 * _strspn - function that gets the length of prefix
 * @s: string
 * @accept: byte
 * Return: the number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int found = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found++;
				break;
			}
		}
	if (accept[j] == '\0')
		return (found);
	}
	return (found);
}
