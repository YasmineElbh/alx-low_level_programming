#include "main.h"
#include <stdlib.h>

/**
 * char *string_nconcat - function that concatenates 2 strings
 * @s1: first string
 * @s2: second string
 * @n: number
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	j = 0;
	k = 0;

	while (s1[j] != '\0')
		j++;
	while (s2[k] != '\0')
		k++;

	str = malloc(sizeof(char) * (n + j + 1));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < j; i++)
		str[i] = s1[i];
	for (i = 0; i < n; i++)
		str[i + j] = s2[i];
	str[i + j] = '\0';
	return (str);
}
