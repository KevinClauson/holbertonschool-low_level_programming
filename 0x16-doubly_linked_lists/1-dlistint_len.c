#include "lists.h"
/**
 * dlistint_len - gets the number of noeds in list.
 * @h: pointer to head of linked list.
 * Return: number of nodes in list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t num;

	num = 0;
	current = h;
	while (current)
	{
		current = current->next;
		++num;
	}
	return (num);
}
