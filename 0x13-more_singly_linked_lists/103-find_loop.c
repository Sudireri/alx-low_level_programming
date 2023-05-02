#include "lists.h"

/**
 * find_listint_loop - function that finds the loop in a linked list
 * @head: pointer to the head of the function
 *
 * Return: The address of the node where the loop starts
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *k;
	listint_t *x;

	if (head == NULL || head->next == NULL)
		return (NULL);

	k = x = head;

	while (k && x && x->next)
	{
		k = k->next;
		x = x->next->next;
		if (k == x)
			break;
	}
	if (k != x)
		return (NULL);
	k = head;

	while (k != x)
	{
		k = k->next;
		x = x->next;
	}
	return (x);
}
