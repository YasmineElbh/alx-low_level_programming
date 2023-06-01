#include "main.h"

/**
 * char *cap_string - capitalize all words
 * @str: string
 * Return: result
 */
char *cap_string(char *str)
{
	int i = 0;
	char ar[] = " \t\n,;.!?\"(){}";

	ar[] = ar[i];
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i == 0)
				str[i] -= 32;
		}
		else
		{
			ar[i] = str[i] + i - 1;
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
