#include "lists.h"
/**
 * reverse_listint - a function that reverses a listint_t linked list.
 * @head: a pointer to a pointer to a struct of listint_t.
 * Return: a pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current, *prev, *next;

	if (*head == NULL)
		return (*head);
	current = *head;
	prev = NULL;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head = prev;
	return (*head);
}
