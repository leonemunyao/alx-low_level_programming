#include "main.h"

/**
 * print_line - draws a line in the terminal
 * @n: number of times the character is to be printed
 * Return: void
 */

void print_line(int n)
{
int i;
for (i = 0; i < n; i++)
{
if (i == n - 1)
{
_putchar('_');
_putchar('\n');
}
else
{
_putchar('_');
}
}
if (n <= 0)
{
_putchar('\n');
}

}
