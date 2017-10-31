#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: a pointer to a list of structs of lintint_t.
 * @index: the index we want returned.
 * Return: the sruct at index given or NULL if does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	temp = head;
	for (i = 0; temp->next != NULL && i < index; ++i)
	{
		temp = temp->next;
	}
	if (i == index)
		return (temp);
	return (NULL);
}
