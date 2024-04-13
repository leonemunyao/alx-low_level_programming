#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index where value is located, or -1 if not found or array is NULL
 */

int jump_search(int *array, size_t size, int value)
{
size_t step;
size_t prev;
size_t i;

if (array == NULL)
return (-1);

step = sqrt(size);
prev = 0;

while (array[prev] < value)
{
printf("Value checked array[%u] = [%d]\n", (unsigned int)prev, array[prev]);
prev += step;

if (prev >= size)
break;
}

printf("Value found between indexes [%lu] and [%lu]\n",
(unsigned long)(prev - step), (unsigned long)prev);

for (i = prev - step + 1; i <= prev && i < size; i++)
{
printf("Value checked array[%lu] = [%d]\n", (unsigned long)i, array[i]);
if (array[i] == value)
{
return (i);
}
}

return (-1);
}
