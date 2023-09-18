#include "main.h"

/**
 * print_rev - prints the string in reverse
 * @s: the string
 * Return: void
 */
void print_rev(char *s)
{
int a;
int result = 0;
for (a = 0 ; s[a] != '\0' ; a++)
{
result++;
}
for (a = result - 1 ; a >= 0 ; a--)
{
_putchar(s[a]);
}
_putchar('\n');
}
