#include "main.h"

/**
 * check_numb - check the number if it is a prime
 * @n: numb1
 * @m: numb2
 * Return: resut
 */
int check_numb(int n, int m)
{
	if (m < 2)
		return (0);
	else if (m > n / 2)
		return (1);
	else
		return (check_numb(n + 1, m));
}

/**
 * is_prime_number - funcion that check if a prime number
 * @n: number
 * Return: result
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (check_numb(2, n));
}
