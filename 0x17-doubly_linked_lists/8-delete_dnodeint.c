#include "lists.h"
#include <stddef.h>

/**
 * delete_dnodeint_at_index - delete the node at a given position in a list
 * @head: pointer to the pointer to the head of the list
 * @index: index of the node to be deleted
 * Return: 1 is success, -1 if failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current = NULL;
unsigned int i;

if (head == NULL || *head == NULL)
{
return (-1);
}
if (index == 0)
{
*head = current->next;
if (*head != NULL)
{
(*head)->prev = NULL;
}
free(current);
return (1);
}
for (i = 0; current != NULL && i < index; i++)
{
current = current->next;
}
if (current == NULL)
{
return (-1);
}
if (current->next != NULL)
{
current->next->prev = current->prev;
}
if (current->prev != NULL)
{
current->prev->next = current->next;
}

free(current);
return (1);
}
