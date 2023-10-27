#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @n: number to set
 * @index: index at which to set bit
 *
 * Return: Always 0
 */

int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int sett_bit;

if (index > (sizeof(unsigned long int) * 8 - 1))
{
return (-1);
}
sett_bit = 1 << index;
*n = *n | sett_bit;
return (1);
}
