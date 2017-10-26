#include "lists.h"
/**
 * add_node -  adds a new node at the beginning of a list_t list.
 * @head: a pointer to a list of pointers.
 * @str: string to be copied into the new node.
 * Return: he address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_head;

	if (head == NULL)
		return (NULL);

	new_head = malloc(sizeof(list_t));
	if (new_head == NULL)
		return (NULL);
	new_head->str = strdup(str);
	new_head->len = strlen(str);
	new_head->next = *head;
	*head = new_head;
	return (*head);
}
