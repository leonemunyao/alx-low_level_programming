#include "lists.h"

/**
 * sum_listint - prints the sum of all the data
 * @head: the pointer
 *
 * Return: Always 0
 */

int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *j = head;

while (j)
{
sum += j->n;
j = j->next;
}

return (sum);
}
