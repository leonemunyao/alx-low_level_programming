#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node
 * @head: the pointer
 * @n:integer
 * @idx: index of the list to add new node
 *
 * Return: Always 0
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i;
listint_t *new_node;
listint_t *add_node = *head;

new_node = malloc(sizeof(listint_t));
if (!new_node || !head)
{
return (NULL);
}

new_node->n = n;
new_node->next = NULL;

if (idx == 0)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}

for (i = 0; add_node && i < idx; i++)
{
if (i == idx - 1)
{
new_node->next = add_node->next;
add_node->next = new_node;
return (new_node);
}
else
add_node = add_node->next;
}

return (NULL);
}
