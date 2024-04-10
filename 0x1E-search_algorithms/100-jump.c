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

if (array == NULL)
return (-1);

step = sqrt(size);
prev = 0;

while (array[min(step, size) - 1] < value)
{
printf("Value checked array[%u] = [%d]\n",
fmin(step, size) - 1, array[min(step, size) - 1]);
prev = step;
step += sqrt(size);
if (prev >= size)
return (-1);
}

while (array[prev] < value)
{
printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
prev++;

if (prev == min(step, size))
return (-1);
}

if (array[prev] == value)
{
printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
return (prev);
}

return (-1);
}
