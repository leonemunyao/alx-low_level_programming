#include "main.h"

/**
 * base_power - func calculates (base ^ power)
 * @base: base of the exponent
 * @power: power of the exponent
 *
 * Return: Always 0
 */

unsigned long int base_power(unsigned int base, unsigned int power)
{
unsigned long int i;
unsigned int j;

i = 1;
for (j = 1; j <= power; j++)
{
i *= base;
}
return (i);
}

/**
 * print_binary - prints a number in binary notation
 * @n: number to print
 *
 * Return: Always 0
 */

void print_binary(unsigned long int n)
{
unsigned long int i, j;
char flag;

flag = 0;
i = base_power(2, sizeof(unsigned long int) * 8 - 1);
while (i != 0)
{
j = n & i;
if (j == i)
{
flag = 1;
_putchar('1');
}
else if (flag == 1 || i == 1)
{
_putchar('0');
}
i >>= 1;
}
}
