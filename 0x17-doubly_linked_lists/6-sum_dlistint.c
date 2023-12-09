#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data(n) of a dlistint
 * @head: pointer to the head of the list
 * Return: sum of all data values
*/

int sum_dlistint(dlistint_t *head)
{
int sum = 0;

while (head != NULL)
{
sum += head->n;
head = head->next;
}

return (sum);
}
