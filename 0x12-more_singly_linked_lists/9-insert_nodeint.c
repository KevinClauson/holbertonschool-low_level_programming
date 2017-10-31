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
	listint_t *new_node, *temp1, *temp2;
	unsigned int i;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	temp1 = *head;
	for (i = 0; temp1 != NULL && i < idx; ++i)
	{
		temp1 = temp1->next;
	}
	if (i != idx)
	{
		free(new_node);
		return (NULL);
	}
	temp2 = temp1->next;
	temp1->next = new_node;
	new_node->next = temp2;
	return (new_node);
}
