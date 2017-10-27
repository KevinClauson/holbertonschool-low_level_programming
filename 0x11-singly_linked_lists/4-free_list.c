#include "lists.h"
/**
 * free_list -  adds a new node at the beginning of a list_t list.
 * @head: a pointer to a list_t struct.
 * Return: nothing.
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
