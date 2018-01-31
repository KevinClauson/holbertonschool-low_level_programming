#include "sort.h"

/**
 * create_listint - Creates a doubly linked list from an array of integers
 *
 * @array: Array to convert to a doubly linked list
 * @size: Size of the array
 *
 * Return: Pointer to the first element of the created list. NULL on failure
 */
void cocktail_sort_list(listint_t **list)
{
	if (list && *list && (*list)->next)
	{
		int flag;
		listint_t *c, *temp;

		flag = 1;
		c = *list;

		while (flag)
		{
			flag = 0;
			while(c->next)
			{
				if (c->n > c->next->n)
				{
					if (c->prev == NULL)
					{
						c->next->prev = NULL;
						*list = c->next;
						c->prev = c->next;
						temp = c->next;
						c->next = c->next->next;
						temp->next = c;
						flag = 1;
						print_list(*list);
					}
					else
					{
						temp = c->next;
						temp->prev = c->prev;
						c->prev->next = temp;
						if (temp->next)
						{
							temp->next->prev = c;
						}
						c->next = temp->next;
						temp->next = c;
						c->prev = temp;
						print_list(*list);
						flag = 1;
					}
				}
				else
				{
					c = c->next;
				}
			}
			while(c->prev)
			{
				if (c->n < c->prev->n)
				{
					temp = c->prev;
					c->prev = temp->prev;
					c->next->prev = temp;
					temp->next = c->next;
					c->next = temp;
					temp->prev = c;
					flag = 1;
					if (c->prev)
						c->prev->next = c;
					else
					{
						*list = c;
					}
					print_list(*list);
				}
				else
				{
					c = c->prev;
				}
			}

		}
	}
}
