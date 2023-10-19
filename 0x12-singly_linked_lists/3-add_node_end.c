#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/**
 * add_node_end - Adds a new node at the end of a linked list
 * @head: Double pointer to the list_t list
 * @str: String to put in the new node
 *
 * Return: Address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *i;
list_t *j = *head;
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
i->next = NULL;

if (*head == NULL)
{
*head = i;
return (i);
}

while (j->next)
{
j = j->next;
}

j->next = i;

return (i);
}
