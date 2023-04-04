#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: string parameter
 * @accept: bytes to be searched
 * Return: returns a pointer to the byte in s
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}