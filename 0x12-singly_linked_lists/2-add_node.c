#include "lists.h"
#include <stdio.h>

/**
 * add_node - function that adds a new node at beginning of a list_t list
 * @head: pointer to the list_t list
 * @str: string to be duplicated
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	size_t nchar;
	
	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);

	newnode->str = strdup(str);

	for (nchar = 0; str[nchar]; nchar++);

	newnode->len = nchar;
	newnode->next = *head;
	*head = newnode;

	return (*head);
}
