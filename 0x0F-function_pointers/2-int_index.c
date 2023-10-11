#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: the target array
 * @size: number of elements in the array
 * @cmp: pointer to the function
 * Return: Always 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int m;

if (array == NULL || cmp == NULL)
{
return (-1);
}
for (m = 0 ; m < size ; m++)
{
if (cmp(array[m]) != 0)
{
return (m);
}
}
return (-1);
}
