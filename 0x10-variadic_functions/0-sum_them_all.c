#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - returns sum of parameters
 * @n: number of parameters
 *
 * Return: Always 0
 */

int sum_them_all(const unsigned int n, ...);
int sum_them_all(const unsigned int n, ...)
{
unsigned int m;
unsigned int sum = 0;

va_list arg;
va_start(arg, n);

for (m = 0 ; m < n ; m++)
{
if (n == 0)
{
return (0);
}
else
{
sum = sum + va_arg(arg, const unsigned int);
}
}
va_end(arg);
return (sum);
}
