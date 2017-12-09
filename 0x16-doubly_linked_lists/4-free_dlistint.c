#include "lists.h"

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	temp = head;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
