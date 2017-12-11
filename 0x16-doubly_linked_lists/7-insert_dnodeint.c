#include "lists.h"
/**
 * insert_dnodeint_at_index - insert a node at a given index.
 * @h: pointer to head of linked list.
 * @idx: index where insertion to take place.
 * @n: data value for the new node to be inserted.
 * Return: address of new node or NULL if index not available.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *my_current, *my_prev, *new;
	unsigned int num;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	num = 0;
	my_current = *h;
	my_prev = NULL;
	while (my_current && num < idx)
	{
		my_prev = my_current;
		my_current = my_current->next;
		++num;
	}
	if (num == idx && my_current == NULL)
	{
		return (add_dnodeint_end(h, n));
	}
	else if (num == idx)
	{
		new = malloc(sizeof(dlistint_t));
		new->n = n;
		new->next = my_current;
		new->prev = my_prev;
		my_current->prev = new;
		my_prev->next = new;
		return (new);
	}
	else
	{
		return (NULL);
	}
}
