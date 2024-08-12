#include "hash_tables.h"

/**
* hash_djb2 - implementation of the djb2 algorithm
* @str: str to be hashed
* Return: hashed value
*/

unsigned long int hash_djb2(const unsigned char *str)
{
    unsigned long int hash;
    int c;

    hash = 5381; // Initial hash value
    while ((c = *str++)) // Iterate over each character in the string
    {
        hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
    }
    return (hash);
}

