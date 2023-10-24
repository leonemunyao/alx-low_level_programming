#include "lists.h"

/**
 * free_listint2 -  frees a listint_t list.
 * @head: the pointer
 */

void free_listint2(listint_t **head)
{
listint_t *free_list;

if (head == NULL)
return;

while (*head)
{
free_list = (*head)->next;
free(*head);
*head = free_list;
}

*head = NULL;
}
