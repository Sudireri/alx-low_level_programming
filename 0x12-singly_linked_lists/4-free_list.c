#include "lists.h"

/**
 * free_list - a function that frees a list_t list
 * @head: pointer to the head of the linked list
 *
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *currentnode, *nextnode;

	currentnode = head;
	while (currentnode != NULL)
	{
		nextnode = currentnode;
		free(currentnode->str);
		free(currentnode);
		currentnode = nextnode->next;
	}
}
