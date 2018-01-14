#include "hash_tables.h"
/**
* hash_table_create - creates a hash table structure and returns a pointer
* @size: the size of the array in the hash table struct.
* Return: returns a pointer to a hash table.
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;

	new = malloc(sizeof(hash_table_t));
	if (new == NULL)
		return (NULL);
	new->size = size;
	new->array = calloc(size, sizeof(hash_node_t *));
	if (new->array == NULL)
	{
		free(new);
		return (NULL);
	}
	return (new);
}
