#include "lists.h"

/**
 * add_nodeint - adds a new node to the beginning of a list
 * @head: the pointer
 * @n: integer
 *
 * Return: Always 0
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node;
if (head == NULL)
{
return (NULL);
}
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
{
return (NULL);
}
if (*head == NULL)
{
new_node->next = NULL;
}
else
{
new_node->next = *head;
}
new_node->n = n;
*head = new_node;
return (0);
}
