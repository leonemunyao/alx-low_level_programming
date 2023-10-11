#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: the name printed
 * @f: variable to hold the string name
 *
 * Return: Always 0
 */

void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
{
return;
}
else
{
f(name);
}
}
