#include "lists.h"

/**
* add_nodeint_end - function that adds a new node at the end of a listint_t
* @head: pointer to the head of the list
* @n: number of elements to fill the node
*
* Return: the address of the new element, or NULL if it failed
*/


listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *last = *head;

	if (head == NULL)
		return (NULL);

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}

	while (last->next != NULL)
		last = last->next;
	last->next = newnode;

	return (newnode);
}
