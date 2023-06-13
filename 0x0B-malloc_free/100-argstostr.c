#include "main.h"
#include <stdlib.h>

/**
 * char *argstostr - function that concatenate all the arguments
 * @ac: count
 * @av: value
 * Return: null if ac == 0 or av == null otherwise pointer
 */
char *argstostr(int ac, char **av)
{
	int i, arg, b;
	int total = 0;
	char *st;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (arg = 0; arg < ac; arg++)
	{
		for (b = 0; av[arg][b]; b++)
			total++;
		total++;
	}

	st = malloc(sizeof(char) * total + 1);
	if (st == NULL)
		return (NULL);
	i = 0;
	for (arg = 0; arg < ac; arg++)
	{
		for (b = 0; av[arg][b]; b++)
		{
			st[i] = av[arg][b];
			i++;
		}
		st[i] = '\n';
		i++;
	}
	st[i] = '\0';
	return (st);
}
