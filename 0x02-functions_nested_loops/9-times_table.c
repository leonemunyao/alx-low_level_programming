#include "main.h"
#include <stdio.h>

/**
 * times_table - forms a table
 *
 * Return: 0
 */

void times_table(void)
{
int a, b;
int result;
for (a = 0 ; a < 10 ; a++)
{
for (b = 0 ; b < 10 ; b++)
{
result = a * b;
}
}
printf("%d", result);
}
