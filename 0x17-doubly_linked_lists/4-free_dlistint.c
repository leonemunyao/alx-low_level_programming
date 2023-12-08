#include "lists.h"

/**
 * free_dlistint - free a dlistint list
 * @head: pointer to the next element of the list
*/
void free_dlistint(dlistint_t *head)
{
dlistint_t *current;

while (head != NULL)
{
current = head;
head = head->next;
free(current);
}
}
