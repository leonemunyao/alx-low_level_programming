#include "lists.h"

/**
 * pop_listint - deletes head node
 * @head: the pointer
 *
 * Return: Always 0
 */

int pop_listint(listint_t **head)
{
listint_t *del_head;
int head_data;

if (!head || !*head)
return (0);

head_data = (*head)->n;
del_head = (*head)->next;
free(*head);
*head = del_head;

return (head_data);
}
