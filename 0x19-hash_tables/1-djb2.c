#include "hash_tables.h"
/**
* hash_djb2: hash function to return the index
* @str: the string to be hashed
* Return: unsigned long that is the index number
*/
unsigned long int hash_djb2(const unsigned char *str)
{
        unsigned long hash;
        int c;

        hash = 5381;
        while ((c = *str++))
        {
            hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
        }
        return (hash);
}
