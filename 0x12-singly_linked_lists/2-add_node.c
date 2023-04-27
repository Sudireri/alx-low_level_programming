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
	list_t *sudi;
	unsigned int len = 0;

	while (str[len])
		len++;

	sudi = malloc(sizeof(list_t));
	if (sudi)
		return (NULL);

	sudi->str = strdup(str);
	sudi->len = len;
	sudi->next = (*head);
	(*head) = sudi;

	return (*head);
}
