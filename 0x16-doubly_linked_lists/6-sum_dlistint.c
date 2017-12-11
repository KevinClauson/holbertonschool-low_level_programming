#include "lists.h"
/**
 * sum_dlistint - sum up all the data in the linked list.
 * @head: pointer to head of linked list.
 * Return: sum of all the data in linked list.
 */
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
