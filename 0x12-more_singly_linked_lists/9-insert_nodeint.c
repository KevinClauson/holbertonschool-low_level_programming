#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: a pointer to a pointer to a list of structs of lintint_t.
 * @idx: index where insertion should take place.
 * @n: the number to be put in the node to be inserted.
 * Return: adress of new node or NULL if fails.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp;
	unsigned int i;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	temp = *head;
	for (i = 0; temp != NULL && i < idx - 1; ++i)
	{
		temp = temp->next;
	}
	if (i != idx - 1)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}
