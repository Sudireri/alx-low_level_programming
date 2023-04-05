#include "main.h"
int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: parameter to have a square root
 *
 * Return: returns the natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - function that recurses to find the square root
 * @n: parameter to have a square root
 * @i: parameter of iteration
 *
 * Return: returns the results after square rooting
 */

int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
