#include "main.h"

/**
 * print_square - prints a square
 * @size: size of the square
 * Return: Should be zero
 */

void print_square(int size)
{
int i, j;
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
if (j == size - 1)
{
_putchar('#');
_putchar('\n');
}
else
{
_putchar('#');
}
}
}
if (size <= 0)
{
_putchar('\n');
}
}
