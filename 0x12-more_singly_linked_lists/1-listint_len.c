#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: a list composed of structs of lintint_t
 * Return: number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t cnt;

	cnt = 0;
	while (h != NULL)
	{
		++cnt;
		h = h->next;
	}
	return (cnt);
}
