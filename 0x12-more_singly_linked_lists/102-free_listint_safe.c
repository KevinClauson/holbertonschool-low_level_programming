#include "lists.h"
/**
 * free_listint_safe - prints a listint_t linked list and prevents looping.
 * @h: a pointer to a pointer to a linked list.
 * Return: number of nodes freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp, *temp2, *temp3;
	size_t cnt, i;

	cnt = 0;
	if (*h == NULL)
		return (cnt);
	temp = *h;
	while (temp != NULL)
	{
		temp2 = temp;
		temp = temp->next;
		free(temp2);
		++cnt;
		i = 0;
		temp3 = *h;
		while (i < cnt)
		{
			if (temp == temp3)
			{
				*h = NULL;
				return (cnt);
			}
			++i;
			temp3 = temp3->next;
		}
	}
	*h = temp;
	return (cnt);
}
