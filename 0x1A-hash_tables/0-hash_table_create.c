#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array.
 *
 * Return: A pointer to the newly created hash table, or NULL on failure.
 */
hash_table_t *hash_table_create(unsigned long int size) {
    /* Allocate memory for the hash table */
    hash_table_t *newTable = (hash_table_t *)malloc(sizeof(hash_table_t));

    if (newTable == NULL) {
        /* Allocation failed */
        return NULL;
    }

    /* Set the size of the hash table */
    newTable->size = size;

    /* Allocate memory for the array of entry pointers */
    newTable->table = (Entry **)malloc(sizeof(Entry *) * size);

    if (newTable->table == NULL) {
        /* Allocation failed, free previously allocated memory */
        free(newTable);
        return NULL;
    }

    /* Initialize each entry pointer to NULL */
    for (unsigned long int i = 0; i < size; i++) {
        newTable->table[i] = NULL;
    }

    return newTable;
}
