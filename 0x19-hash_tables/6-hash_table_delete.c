#include "hash_tables.h"
/**
* hash_table_print: prints out hashtable
* @ht: is teh hash table to print
* Return: nothing 
*/
void hash_table_delete(hash_table_t *ht)
{
    unsigned long int i;
    hash_node_t *temp, *temp2;

    if (ht)
    {
        if(ht->array)
        {
            for (i = 0; i < ht->size; ++i)
            {   
                if (ht->array[i])
                {
                    temp = ht->array[i];
                    temp2 = NULL;
                    while(temp)
                    {
                        temp2 = temp;
                        temp = temp->next;
                        if (temp2->key)
                            free(temp2->key);
                        if (temp2->value)
                            free(temp2->value);
                        free(temp2);
                    }
                }
            }
            free(ht->array);
        }
        free(ht);
    }
}