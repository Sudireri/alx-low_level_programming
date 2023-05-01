#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node
 * @head: pointer to the head
 * @index: the index of the node
 *
 * Return: returns the nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter = 0, nodes;
	listint_t *temp = head;

	if (head == NULL)
		return (NULL);

	for (nodes = 0; temp != NULL; nodes++)
		temp = temp->next;
	if (index > nodes)
		return (NULL);

	temp = head;
	while (counter <= index)
	{
		if (counter == index)
			return (temp);
		temp = temp->next;
		counter++;
	}
	return (NULL);
}
