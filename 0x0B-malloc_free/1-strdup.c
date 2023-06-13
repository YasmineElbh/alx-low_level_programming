#include "main.h"
#include <stdlib.h>

/**
 * char *_strdup - function that returns a pointer
 * @str: character
 * Return: NULL if str = NULL
 */
char *_strdup(char *str)
{
	int i = 0;
	int lengthh;
	char *dip;

	if (str == NULL)
		return (NULL);
	while (str[i])
	{
		lengthh++;
		i++;
	}
	dip = malloc(sizeof(char) * (lengthh + 1));
	if (dip == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		dip[i] = str[i];
	}
	dip[i] = '\0';
	return (dip);
}
