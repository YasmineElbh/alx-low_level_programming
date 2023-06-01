#include "main.h"

/**
 * char *rot13 - encode a string
 * @str: string
 * Return: result
 */
char *rot13(char *str)
{
	int i, j;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKL;MNOPQRSTUVWXYZ";
	char b[] = "mnopqrstuvwxyzabcdefghijklMNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (str[i] == a[i])
			{
				str[i] = b[j];
				break;
			}
		}
	}
	return (str);
}
