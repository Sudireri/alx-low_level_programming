#include "main.h"
#include <stdlib.h>

/*
 * *malloc_checked - function that allocates memory using malloc
 * @b: argument to allocate number of bytes
 *
 * Return: returns a pointer, but if malloc fails, 98
 */

void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
