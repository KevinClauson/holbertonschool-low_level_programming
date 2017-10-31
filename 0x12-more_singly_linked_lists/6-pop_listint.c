#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: a pointer to a pointer to struct of lintint_t.
 * Return: the head node’s data or 0 if empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (*head)
	{
		temp = *head;
		num = temp->n;
		*head = temp->next;
		free(temp);
		return (num);
	}
	return (0);
}
