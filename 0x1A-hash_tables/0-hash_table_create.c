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
hash_table_t *hash_table;
unsigned long int i;
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
hash_table = malloc(sizeof(hash_table_t));
if (!hash_table)
{
return (NULL);
}

/*Allocate memory for the array*/
hash_table->array = malloc(size *sizeof(hash_node_t *));
if (!hash_table->array)
{
free(hash_table);
return (NULL);
}

/*Initialize the array*/
for (i = 0; i < size; i++)
{
hash_table->array[i] = NULL;
}

/*Set the size of the array*/
hash_table->size = size;

/*Initialize the count of entries in the hash table*/
hash_table->count = 0;
return (hash_table);
}
