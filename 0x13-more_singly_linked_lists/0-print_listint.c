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
head = 0;

while (h)
{
printf("%d\n", h->n);
head++;
h = h->next;
}
return (head);
}
