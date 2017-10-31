#include "lists.h"
/**
 * delete_nodeint_at_index -  deletes the node at given index of linked list.
 * @head: a pointer to a list of structs of lintint_t.
 * @index: the index we want deleted.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp1, *temp2;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	temp1 = *head;
	if (index == 0)
	{
		*head = temp1->next;
		free(temp1);
		return (1);
	}
	for (i = 0; temp1 != NULL && i < index; ++i)
	{
		temp2 = temp1;
		temp1 = temp1->next;
	}
	if (i != index)
		return (-1);
	temp2->next = temp1->next;
	if (temp1)
		free(temp1);
	return (1);
}
