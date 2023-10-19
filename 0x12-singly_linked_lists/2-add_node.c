#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - Adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *i;
unsigned int len = 0;

while (str[len])
{
len++;
}

i = malloc(sizeof(list_t));
if (!i)
{
return (NULL);
}

i->str = strdup(str);
i->len = len;
i->next = (*head);
(*head) = i;

return (*head);
}
