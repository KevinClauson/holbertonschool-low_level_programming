#include "lists.h"
/**
 * free_listint2 - a function that free a listint_t list.
 * @head: a pointer to a pointer to struct of lintint_t.
 * Return: nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head != NULL)
	{
		while (*head != NULL)
		{
			temp = *head;
			*head = temp->next;
			free(temp);
		}
	}
}
