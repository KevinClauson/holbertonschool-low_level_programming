#include "hash_tables.h"
/**
* key_index: returns the key for the array where should store value
* @size: the size of the array
* Return: returns an unsinged long that is the index value from 0 to size - 1
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    unsigned long int index;

    index = hash_djb2(key) % size;
    return index;
}
