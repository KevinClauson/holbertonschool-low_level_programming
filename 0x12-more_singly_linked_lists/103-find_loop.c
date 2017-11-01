#include "lists.h"
/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: a pointer to a linked list.
 * Return: a pointer to the start of the loop or NULL if no loop.
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
		while (slow && fast && fast->next)
		{
			slow = slow->next;
			fast = fast->next->next;
			if (fast == head)
				return (head);
			else if (slow == fast)
				break;
		}
		head = head->next;
	}
	return (NULL);
}
