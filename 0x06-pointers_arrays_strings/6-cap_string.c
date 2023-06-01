#include "main.h"

/**
 * char *cap_string - capitalize all words
 * @str: string
 * Return: result
 */
char *cap_string(char *str)
{
	int i = 0;
	char ar[] = {'\t', '\n', ',', ';', '!', '?', ' ', '"', '(', ')', '{', '}'};

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i == 0)
				str[i] -= 32;
		}
		i++;
	}
	return (str);
}