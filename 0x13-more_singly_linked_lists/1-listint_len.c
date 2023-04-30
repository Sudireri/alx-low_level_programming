#include "lists.h"

/**
 * listint_len - function that returns the number of elements in listint_t
 * @h: pointer to the head of listint_t
 *
 * Return: number of elements in the linked list given
 */

size_t listint_len(const listint_t *h)
{
	size_t k;

	for (k = 0; h != NULL; k++)
	{
		h = h->next;
	}
	return (k);
}
