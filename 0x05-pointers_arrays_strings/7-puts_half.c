#include "main.h"

/**
 * puts_half -  prints half of a string
 * @str: the string
 * Return: void
 */
void puts_half(char *str)
{
int a;
int b;
int result = 0;
for (a = 0 ; str[a] != '\0' ; a++)
{
result++;
b = (result - 1) / 2;
}
for (a = b + 1 ; str[a] != '\0' ; a++)
{
_putchar(str[a]);
}
}
