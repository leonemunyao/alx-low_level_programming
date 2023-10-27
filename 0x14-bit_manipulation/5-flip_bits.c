#include "main.h"

/**
 * flip_bits - number of bits to flip from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: Always 0
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int i, count_bit = 0;
unsigned long int current;
unsigned long int exclusive = n ^ m;

for (i = 63; i >= 0; i--)
{
current = exclusive >> i;
if (current & 1)
{
count_bit++;
}
}

return (count_bit);
}

