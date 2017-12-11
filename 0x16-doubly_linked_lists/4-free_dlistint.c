#include "lists.h"
/**
 * free_dlistint - free linked list.
 * @head: pointer to head of linked list.
 * Return: nothing.
 */
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
