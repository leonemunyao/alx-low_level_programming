#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index
 * @head: the pointer
 * @index: index of the node to be deleted
 *
 * Return: Always 0
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *del_node = *head;
listint_t *current = NULL;
unsigned int i = 0;

if (*head == NULL)
{
return (-1);
}

if (index == 0)
{
*head = (*head)->next;
free(del_node);
return (1);
}

while (i < index - 1)
{
if (!del_node || !(del_node->next))
{
return (-1);
}
del_node = del_node->next;
i++;
}


current = del_node->next;
del_node->next = current->next;
free(current);

return (1);
}
