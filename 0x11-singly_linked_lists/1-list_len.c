#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list_t list..
 * @h: a list of list_t.
 * Return: Always 0.
 */
size_t list_len(const list_t *h)
{
	int cnt;

	cnt = 0;
	while (h != NULL)
	{
		++cnt;
		h = h->next;
	}
	return (cnt);
}
