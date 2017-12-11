#include "lists.h"
/**
 * delete_dnodeint_at_index - delete a node at a given index.
 * @head: pointer to head of linked list.
 * @index: index where deletion to happen.
 * Return: 1 if deletion occurs or -1 if doesn't work.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *my_current, *my_prev;
	unsigned int num;

	if (head == NULL)
	{
		return (-1);
	}
	num = 0;
	my_current = *head;
	my_prev = NULL;
	while (my_current && num < index)
	{
		my_prev = my_current;
		my_current = my_current->next;
		++num;
	}
	if (my_current == NULL)
	{
		return (-1);
	}
	else if (index == 0)
	{
		*head = my_current->next;
		if (my_current->next)
			my_current->next->prev = NULL;
		free(my_current);
		return (1);
	}
	else if (num == index)
	{
		if (my_prev != NULL)
			my_prev->next = my_current->next;
		if (my_current->next != NULL)
			my_current->next->prev = my_prev;
		free(my_current);
		return (1);
	}
	else
		return (-1);
}
