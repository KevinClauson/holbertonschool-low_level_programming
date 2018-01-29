#include "sort.h"

/**
 * swap - swap nodes in a doubly linked list
 *
 * @b: node on the left
 * @a: node on the right
 *
 * Return: Nothing
 */
void swap(listint_t *b, listint_t *a)
{
	if (a->next)
		a->next->prev = b;
	b->next = a->next;
	a->next = b;
	a->prev = b->prev;
	b->prev = a;
}

/**
 * insertion_sort_list - sort a doubly linked list
 *
 * @list: Double pointer to a doubly linked list
 *
 * Return: Nothing.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *nxt, *left;

	if (list && *list && (*list)->next)
	{
		current = (*list)->next;
		while (current)
		{
			nxt = current->next;
			left = current->prev;
			while (left && current->n < left->n)
			{
				swap(left, current);
				if (current->prev)
					current->prev->next = current;
				else
					*list = current;
				left = current->prev;
				print_list(*list);
			}
			current = nxt;
		}
	}
}
