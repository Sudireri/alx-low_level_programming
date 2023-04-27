#include "lists.h"
#include <stdio.h>

/**
 * add_node_end - function that adds a new node at the end of list_t
 * @head: pointer
 * @str: string
 *
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *currentnode;
	size_t n;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);

	newnode->str = strdup(str);

	for (n = 0; str[n]; n++);

	newnode->len = n;

	newnode->next = NULL;

	currentnode = *head;

	if (currentnode == NULL)
	{
		*head = newnode;
	}
	else
	{
		while (currentnode->next != NULL)
			currentnode = currentnode->next;
		currentnode->next = newnode;
	}
	return (*head);
}
