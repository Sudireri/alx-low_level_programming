#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of the two diagonals
 * @a: matrix of integers
 * @size: matrix size
 */

void print_diagsums(int *a, int size)
{
	int i, num1 = 0, num2 = 0;

	for (i = 0; i < size; i++)
	{
		num1 += a[i];
		a += size;
	}
	a -= size;

	for (i = 0; i < size; i++)
	{
		num2 += a[i];
		a -= size;
	}
	printf("%d, %d\n", num1, num2);
}
