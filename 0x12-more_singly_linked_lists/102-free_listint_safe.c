#include "lists.h"
/**
 * free_listint_safe - prints a listint_t linked list and prevents looping.
 * @h: a pointer to a pointer to a linked list.
 * Return: number of nodes freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp, *temp2;
	size_t cnt;

	cnt = 0;
	if (*h == NULL)
		return (cnt);
	temp = *h;
	while (temp != NULL)
	{
		temp2 = temp;
		temp = temp->next;
		temp2->next = NULL;
		free(temp2);
		++cnt;
	}
	*h = temp;
	return (cnt);
}
