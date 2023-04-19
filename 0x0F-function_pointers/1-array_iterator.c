#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes a function given as parameter on elements of array
 * @array: sequence of the elements
 * @size: number of elements in array
 * @action: pointer to the function used
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array == NULL || action == NULL)
		return;
	for (x = 0; x < size; x++)
	{
		action(array[x]);
	}
}
