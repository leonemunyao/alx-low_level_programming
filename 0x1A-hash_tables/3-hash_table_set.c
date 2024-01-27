#include "hash_tables.h"
/**
 * hash_table_set - adds the elements of the hashtable
 * @ht: the hashtable to add the value
 * @key: the key
 * @value: value associated with the key
 * Return: Always 0
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int index;
hash_node_t *new_node, *current;
if (!ht || !key || !value)
{
return (0);
}
index = key_index((const unsigned char *)key, ht->size);
current = ht->array[index];
/* while there is no node in this position */
while (current != NULL)
{
if (strcmp(current->key, key) == 0)
{
free(current->value);
current->value = strdup(value);
if (!current->value)
{
return (0);
}
return (1);
}
current = current->next;
}
/*If the key doesn't exists create a new node and add it to the list*/
new_node = malloc(sizeof(hash_node_t));
if (!new_node)
{
return (0);
}
new_node->key = strdup(key);
if (!new_node->key)
{
free(new_node);
return (0);
}
new_node->value = strdup(value);
if (!new_node->value)
{
free(new_node->key);
free(new_node);
return (0);
}
new_node->next = ht->array[index];
ht->array[index] = new_node;
++(ht->count);
return (1);
}
