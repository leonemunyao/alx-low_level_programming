#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 * Return: Should be 0
 */

void print_triangle(int size)
{
int col, row_space, row_hash;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (col = 1; col <= size; col++)
{
for (row_space = size - col; row_space >= 1; row_space--)
{
_putchar(' ');
}
for (row_hash = 1; row_hash <= col; row_hash++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
