#include "lists.h"

/**
 * listint_len - prints number of elements in a linked list
 * @h: head of the linked list
 *
 * Return: Always 0
 */

size_t listint_len(const listint_t *h)
{
size_t head = 0;
if (h == NULL)
{
return (0);
}
for (head = 0 ; h != NULL ; head++)
{
h = h->next;
}
return (head);
}
