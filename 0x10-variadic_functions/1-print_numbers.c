#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers
 * @separator: string
 * @n: number of integers
 *
 * Return: Always 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int m, arry;

va_list ptr;
va_start(ptr, n);

for (m = 0 ; m < n ; m++)
{
arry = va_arg(ptr, const unsigned int);
printf("%d", arry);

if (m != (n - 1) && separator != NULL)
{
printf("%s", separator);
}
}
printf("\n");
va_end(ptr);
}
