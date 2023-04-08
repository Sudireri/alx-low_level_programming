#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: parameter
 * @b: parameter representing character to copy
 * @n: parameter of number of times to copy
 *
 * Return: changed array
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
