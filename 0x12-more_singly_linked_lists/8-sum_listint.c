#include "lists.h"
/**
 * sum_listint - sums all the data (n) of a listint_t linked list.
 * @head: a pointer to a list of structs of lintint_t.
 * Return: returns the sum of all the data (n) or 0 if empty.
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum;

	sum = 0;
	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
