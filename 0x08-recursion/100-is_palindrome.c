#include "main.h"

/**
 * _strlen_recursion - function that return length
 * @s: string
 * Return: result
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		i++;
		i = i + _strlen_recursion(s + 1);
	}
	return (i);
}

/**
 * check - check if is it palindrome
 * @n: numb
 * @m: numbb
 * @i: num
 * Return: resut
 */
int check(int *n, int m, int i)
{
	if (*s != '\0')
	{
		if (n[m] == n[i])
		{
			if (i > j / 2)
				return (1);
			else
				return (check(n, i + 1, m - 1));
		}
		else
			return (0);
	}
}

/**
 * is_palindrome - checks that if it is a palindrome
 * @s: string
 * Return: result
 */
int is_palindrome(char *s)
{
	int i = 1;

	return (check(i, s, _strlen_recursion(s) - 1));
}
