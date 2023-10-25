#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node
 * @head: the pointer
 * @index: index of the node
 *
 * Return: Always 0
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int a = 0;
listint_t *nth_node = head;

while (nth_node && a < index)
{
nth_node = nth_node->next;
a++;
}

return (nth_node ? nth_node : NULL);
}
