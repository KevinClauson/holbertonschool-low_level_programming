#include "hash_tables.h"
/**
* hash_table_print - prints out hashtable
* @ht: is teh hash table to print
* Return: nothing
*/

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp;
	int flag;

	if (ht != NULL && ht->array != NULL)
	{
		printf("{");
		for (i = 0, flag = 0; i < ht->size; ++i)
		{
			if (ht->array[i])
			{
				temp = ht->array[i];
				while (temp)
				{
					if (temp->key && temp->value)
					{
						if (flag == 1)
							printf(", ");
						printf("'%s': '%s'", temp->key, temp->value);
						flag = 1;
					}
					temp = temp->next;
				}
			}
		}
		printf("}\n");
	}
}
