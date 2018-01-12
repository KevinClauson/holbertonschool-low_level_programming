#include "hash_tables.h"
/**
* create_node: creates a node with the key and value and returns a pointer to it
* @key: the key to put in the node
* @value: the value to put in the node
* Return: returns a pionter to the node. 
*/
hash_node_t* create_node(const char *key, const char *value)
{
    hash_node_t *new_node;

    new_node = malloc(sizeof(hash_node_t));
    if (new_node == NULL)
        return (NULL);
    new_node->key = malloc(sizeof(char) * strlen(key) + 1);
    if (new_node->key == NULL)
    {
        free(new_node);
        return (NULL);
    }
    strcpy(new_node->key, key);
    new_node->value = malloc(sizeof(char) * strlen(value) + 1);
    if (new_node->value == NULL)
    {
        free(new_node->key);
        free(new_node);
        return (NULL);
    }
    strcpy(new_node->value, value);
    new_node->next = NULL;
    return (new_node);
}

/**
* hash_table_set: returns the key for the array where should store value
* @size: the size of the array
* Return: returns an unsinged long that is the index value from 0 to size - 1
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index;
    hash_node_t *new_node, *temp;

    if (ht->size == 0 || ht->array == NULL || key == NULL || key[0] == '\0')
        return (0);
    index = key_index((unsigned char *)key, ht->size);
    if (index >= ht->size)
        return (0);
    new_node = create_node(key, value);
    if (new_node == NULL)
        return (0);
    if (ht->array[index] == NULL)
    {
        ht->array[index] = new_node;
        return (1);
    }
    else
    {
        temp = ht->array[index];
        while (temp)
        {
            if(temp->key && new_node->key && strcmp(temp->key, new_node->key) == 0)
            {
                free(temp->value);
                temp->value = new_node->value;
                free(new_node->key);
                free(new_node);
                return (1);
            }
            temp = temp->next;
        }
        temp = ht->array[index];
        ht->array[index] = new_node;
        new_node->next = temp;
        return (1);
    }
}
