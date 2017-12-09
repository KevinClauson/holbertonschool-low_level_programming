#include "lists.h"

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t num;

	num = 0;
	current = h;
	while(current)
	{
		current = current->next;
		++num;
	}
	return (num);
}
