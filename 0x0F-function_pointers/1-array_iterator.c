#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * @size: size of array
 * @action: pointer to the function needed
 * @array: target file
 * Return: Always 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int m;
if (array == NULL || action == NULL)
{
return;
}
for (m = 0 ; m < size ; m++)
{
action(*array);
array++;
}
}
