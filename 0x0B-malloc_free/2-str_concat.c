#include "main.h"
#include <stdlib.h>

/**
 * char *str_concat - function that concatenate two strings
 * @s1: string one
 * @s2: string two
 * Return: Null on fail
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0; 
	int lengthh = 0;
	char *concat;

	if (s1 == NULL && s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}
	while (s1[i] || s2[i])
	{
		lengthh++;
		i++;
	}

	concat = malloc(sizeof(char) * lengthh);
	for (i = 0; s1[i]; i++)
		concat[i] = s1[i];
	for (i = 0; s2[i]; i++)
		concat[i] = s2[i];
	concat[i] = '\0';
	return (concat);
}
