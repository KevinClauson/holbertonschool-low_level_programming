#include "lists.h"


/**
 * print_listint_safe - prints a listint_t linked list and prevents looping.
 * @head: a pointer to head of linked list.
 * Return: a pointer to the first node of the reversed list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp, *temp2;
	size_t cnt, i, flag;

	flag = cnt = 0;
	if (head == NULL)
		exit(98);
	temp = head;
	while (temp != NULL)
	{
		printf("[%p] %d\n", (void *) temp, temp->n);
		++cnt;
		temp2 = head;
		temp = temp->next;
		i = 0;
		while (i < cnt)
		{
			if (temp2 == temp)
			{
				flag = 1;
				printf("-> [%p] %d\n", (void *) temp2, temp2->n);
				break;
			}
			temp2 = temp2->next;
			++i;
		}
		if (flag == 1)
			break;
	}
	return (cnt);
}
