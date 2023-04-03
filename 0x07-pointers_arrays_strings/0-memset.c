#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: parameter
 * @b: parameter
 * @n: parameter
 *
 * Return: changed array
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
