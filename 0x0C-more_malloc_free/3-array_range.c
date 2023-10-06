#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
int *a;
int i, j;

if (min > max)
{
return (NULL);
}
j = max - min + 1;
a = malloc(sizeof(int) * 1);
if (a == NULL)
{
return (NULL);
}
for (i = 0 ; i < j ; i++)
{
a[i] = min;
min++;
}
return (a);
}
