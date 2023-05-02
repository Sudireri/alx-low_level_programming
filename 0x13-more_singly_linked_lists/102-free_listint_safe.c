#include "lists.h"

/**
 * free_listp2 - function that frees a listint_t list
 * @head: pointer to the head of the list
 *
 * Return: nothing
 */

void free_listp2(listp_t **head)
{
	listp_t *temp;
	listp_t *current;

	if (head != NULL)
	{
		current = *head;
		while ((temp = current) != NULL)
		{
			current = current->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - a function that frees a listint_t list
 * @h: pointer to the head of the linked list
 *
 * Return: the size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
	size_t node = 0;
	listp_t *hptr, *new, *sum;
	listint_t *current;

	hptr = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)*h;
		new->next = hptr;
		hptr = new;

		sum = hptr;

		while (sum->next != NULL)
		{
			sum = sum->next;
			if (*h == sum->p)
			{
				*h = NULL;
				free_listp2(&hptr);
				return (node);
			}
		}
		current = *h;
		*h = (*h)->next;
		free(current);
		node++;
	}
	*h = NULL;
	free_listp2(&hptr);
	return (node);
}
