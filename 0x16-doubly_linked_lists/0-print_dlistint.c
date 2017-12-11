#include "lists.h"
/**
 * print_dlistint - print data in linked list.
 * @h: pointer to head of list
 * Return: number of nodes in list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t num;

	num = 0;
	current = h;
	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
		++num;
	}
	return (num);
}
