#include "lists.h"
/**
 * add_dnodeint_end - add a node to the end of linked list.
 * @head: pointer to head of linked list.
 * @n: data for the added node.
 * Return: address to new node.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *current;

	current = *head;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (current == NULL)
	{
		*head = new;
		return (*head);
	}
	while (current->next)
	{
		current = current->next;
	}
	current->next = new;
	new->prev = current;
	return (new);
}
