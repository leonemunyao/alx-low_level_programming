#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>

/**
 * print_strings - prints strings
 * @separator: string
 * @n: number of strings
 *
 * Return: Always 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int k;
char *str;

va_list print_str;

va_start(print_str, n);
for (k = 0 ; k < n ; k++)
{
str = va_arg(print_str, char *);
if (str == NULL)
{
printf("(nil)");
}
else
{
printf("%s", str);
}
if (k != (n - 1) && separator != NULL)
{
printf("%s", separator);
}
}
printf("\n");
va_end(print_str);
}
