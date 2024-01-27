#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array.
 *
 * Return: A pointer to the newly created hash table, or NULL on failure.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
/* Check if the size is a power of 2*/
if (size & (size - 1))
{
size--;
size = size >> 1;
size = size >> 2;
size = size >> 4;
size = size >> 8;
size = size >> 16;
size++;
}

/*Allocate memory for the hashtable*/
hash_table_t *hashtable = malloc(sizeof(hash_table_t));
if (!hashtable)
{
return (NULL);
}

/*Allocate memory for the array*/
hashtable->array = malloc(size *sizeof(hash_node_t *));
if (!hashtable->array)
{
free(hashtable);
return (NULL);
}

/*Initialize the array*/
for (unsigned long int i = 0; i < size; i++)
{
hashtable->array[i] = NULL;
}

/*Set the size of the array*/
hashtable->size = size;

/*Initialize the count of entries in the hash table*/
hashtable->count = 0;
return (hashtable);
}
