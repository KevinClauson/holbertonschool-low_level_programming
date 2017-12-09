#include "lists.h"

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t num;

	num = 0;
	current = h;
	while(current)
	{
		printf("%d\n", current->n);
		current = current->next;
		++num;
	}
	return (num);
}
