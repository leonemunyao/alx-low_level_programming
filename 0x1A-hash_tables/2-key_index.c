#include "hash_tables.h"
#include <stdlib.h>

/**
 * key_index - gives you the index of key
 * @key: the key to get the index for
 * @size: the size of array of the hashtable
 * Return: The index at which the key/value pair should be stored
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
/* Calculate the hash value of the key */
__uint32_t hash_value = hash_djb2(key);

/* Calculate the index at which the key/value pair should be stored */
return (hash_value % size);
}
