#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: pointer to lintint_t.
 * Return: number of nodes in list or NULL if none.
 */
size_t print_listint(const listint_t *h)
{
	size_t cnt;

	cnt = 0;
	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		cnt++;
	}
	return (cnt);
}
