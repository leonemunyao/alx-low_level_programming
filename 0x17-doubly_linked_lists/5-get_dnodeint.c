#include "lists.h"

/**
 * get_dnodeint_at_index - get the nth node of a dlistint_t linked list
 * @head: pointer to the head of the list
 * @index: index of the node to retrieve
 * Return: Pointer to the nth node
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int k;

for (k = 0; head != NULL && k < index; k++)
{
head = head->next;
}

return (k == index ? head : NULL);
}
