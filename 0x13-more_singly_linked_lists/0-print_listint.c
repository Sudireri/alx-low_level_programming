#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to the head of listint_t list
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t k;
	const listint_t *temp;

	if (h == NULL)
		return (0);

	temp = h;
	for (k = 0; temp != NULL; k++)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	return (k);
}
