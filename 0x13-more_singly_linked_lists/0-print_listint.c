#include "lists.h"

/**
 * print_listint - prints all elements
 * @h: head of the list
 *
 * Return: Always 0
 */

size_t print_listint(const listint_t *h)
{
size_t head;
if (h == NULL)
{
return (0);
}
for (head = 0 ; h != NULL ; head++)
{
printf("%d\n", h->n);
h = h->next;
}
return (head);
}
