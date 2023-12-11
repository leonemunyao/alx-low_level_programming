#include "main.h"

/**
 * _puts - prints each character until null terminator
 * @s: the string
 * Return: ALways 0
*/
void _puts(char *s)
{
while (*s != '\0')
{
_putchar(*s);
s++;
}

_putchar('\n');
}
