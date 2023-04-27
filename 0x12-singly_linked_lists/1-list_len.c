#include "lists.h"

/**
 * list_len - function that returns the number of elements in list_t list
 * @h: pointer to list_t list
 *
 * Return: returns  no. of elements
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
