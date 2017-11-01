#include "lists.h"
/**
 * free_listint_safe - prints a listint_t linked list and prevents looping.
 * @h: a pointer to a pointer to a linked list.
 * Return: number of nodes freed.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t  *slow, *fast;

	if (head == NULL)
		return (NULL);
	slow = fast = head;
	while (head)
	{
		slow = fast = head;
		while(slow && fast && fast->next)
		{
			slow = slow->next;
			fast = fast->next->next;
			if(fast == head)
				return (head);
			else if(slow == fast)
				break;
		}
		head = head->next;
	}
	return (NULL);
}
