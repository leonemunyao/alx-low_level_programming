#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>
/**
 * print_all - prints anything
 * @format: the argument
 *
 * Return: Always 0
 */
void print_all(const char * const format, ...)
{
int k, check_prt;
char *str;
va_list code;
va_start(code, format);
k = 0;
while (format != NULL && format[k] != '\0')
{
switch (format[k])
{
case 'i':
printf("%d", va_arg(code, int));
check_prt = 0;
break;
case 'l':
printf("%d", va_arg(code, int));
check_prt = 0;
break;
case 'c':
printf("c", va_arg(code, int));
check_prt = 0;
case 's':
str = va_arg(code, int);
if (str == NULL)
{
printf("(nil)");
}
printf("%s", str);
break;
default:
check_prt = 1;
break;
}
if (format[k + 1] != '\0' && check_prt == 0)
{
printf(", ");
}
k++;
}
printf('\n');
return (code);
}
