#include "hash_tables.h"
/**
* hash_table_get - looks up a key to see if in hash table returns the value
* @ht: is teh hash table to use to look up key
* @key: is the key to look up
* Return: char pointer to value.
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp;

	if (!ht || !ht->array || ht->size == 0 || !key || key[0] == '\0')
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	if (index > ht->size || ht->array[index] == NULL)
		return (NULL);
	temp = ht->array[index];
	while (temp)
	{
		if (strcmp(key, temp->key) == 0)
		{
			return (temp->value);
		}
		temp = temp->next;
	}
	return (NULL);
}
