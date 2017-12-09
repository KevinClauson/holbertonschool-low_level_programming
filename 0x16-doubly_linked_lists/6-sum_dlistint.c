#include "lists.h"

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int num;

	num = 0;
	temp = head;

	while (temp)
	{
		num += temp->n;
		temp = temp->next;
	}
	return (num);
}
