#include "main.h"

/**
 * _strlen - function strlen
 * @s: string
 * Return: result
 */
int _strlen(char *s)
{
	int k = 0;

	while (s[k])
		k++;
	return (k);
}

/**
 * char *_strcpy - function that copies string
 * @dest: destination
 * @src: source
 * Return: result
 */
char *_strcpy(char *dest, char *src)
{
	int i, a;

	a = _strlen(src);
	for (i = 0; i < a; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
