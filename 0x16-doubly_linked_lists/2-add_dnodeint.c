#include "lists.h"
/**
 * add_dnodeint - add a node to the start of linked list.
 * @head: double pointer to head of list.
 * @n: data for the new node.
 * Return: address of new node.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;
	return (new);
}
