#include "lists.h"
/**
 * get_dnodeint_at_index - find node at index.
 * @head: pointer to head of linked list.
 * @index: index where node to be returned is to be found.
 * Return: the address of the node at that index if doesn't exist then null.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int num;

	num = 0;
	temp = head;

	while (temp && num < index)
	{
		temp = temp->next;
		++num;
	}
	if (temp == NULL)
		return (NULL);
	return (temp);
}
