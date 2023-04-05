#include "main.h"

/**
 * _pow_recursion - function that returns the value of x to power of y
 * @x: parameter to be raised
 * @y: parameter of the power being raised
 *
 * Return: value of x raised to power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
