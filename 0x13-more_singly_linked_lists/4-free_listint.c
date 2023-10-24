#include "lists.h"

/**
 * free_listint -  frees a listint_t list.
 * @head: the pointer
 */

void free_listint(listint_t *head)
{
listint_t *free_list;

while (head)
{
free_list = head->next;
free(head);
head = free_list;
}
}
