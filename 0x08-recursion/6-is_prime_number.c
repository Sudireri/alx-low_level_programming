#include "main.h"
int actual_prime(int n, int i);

/**
 * is_prime_number - function that returns 1 if the input integer is prime
 * @n: integer number
 *
 * Return: returns 1 if integer is prime otherwise return 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - function to recursively prime the number
 * @n: integer number
 * @i: parameter for iteration
 *
 * Return: returns 1 if input is prime and 0 if otherwise
 */

int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
