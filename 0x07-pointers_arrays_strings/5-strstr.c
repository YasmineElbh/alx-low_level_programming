#include "main.h"

/**
 * *_strstr - function that locate a substring
 * @haystack: input string
 * @needle: substring
 * Return: pointer that located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[i + j] != needle[j])
					break;
			}
		
			if (needle[j] == '\0')
				return (haystack + i);
		}
	}
	return ('\0');
}
