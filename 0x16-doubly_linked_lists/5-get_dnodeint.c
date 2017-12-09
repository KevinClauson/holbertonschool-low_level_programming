#include "lists.h"

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
