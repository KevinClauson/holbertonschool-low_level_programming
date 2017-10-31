#include "lists.h"
/**
 * free_listint - a function that free a listint_t list.
 * @head: a pointer to a struct of lintint_t.
 * Return: nothing.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
