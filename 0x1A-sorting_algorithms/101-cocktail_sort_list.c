#include "sort.h"

/**
 * sort_r - sort doubly linked list going from tail to head;
 * @list: doubly linked list
 * @flag: flag lets us know if a swap has been made.
 * @c: pointer to current node.
 * Return: nothing
 */
void sort_r(listint_t **list, int *flag, listint_t *c)
{
	listint_t *temp;

	while (c->prev)
	{
		if (c->n < c->prev->n)
		{
			temp = c->prev;
			c->prev = temp->prev;
			c->next->prev = temp;
			temp->next = c->next;
			c->next = temp;
			temp->prev = c;
			*flag = 1;
			if (c->prev)
				c->prev->next = c;
			else
				*list = c;
			print_list(*list);
		}
		else
			c = c->prev;
	}
}

/**
 * sort_f - sort the list
 * @list: doubly linked list
 * @flag: flag to indicate a swap has been made.
 * @c: current node
 * Return: nothing
 */
void sort_f(listint_t **list, int *flag, listint_t *c)
{
	listint_t *temp;

	while (c->next)
	{
		if (c->n > c->next->n)
		{
			c->next->prev = c->prev;
			if (c->prev)
				c->prev->next = c->next;
			else
				*list = c->next;
			if (c->next->next)
				c->next->next->prev = c;
			c->prev = c->next;
			temp = c->next->next;
			c->next->next = c;
			c->next = temp;
			*flag = 1;
			print_list(*list);
		}
		else
			c = c->next;
	}
}

/**
 * cocktail_sort_list - sort a doubly linked list
 * @list: doubly linked list
 *
 * Return: nothing
 */
void cocktail_sort_list(listint_t **list)
{
	if (list && *list && (*list)->next)
	{
		int flag;
		listint_t *c;

		c = *list;
		flag = 1;
		while (flag)
		{
			flag = 0;
			sort_f(list, &flag, c);
			sort_r(list, &flag, c);
		}
	}
}
