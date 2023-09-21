#include "main.h"

/**
 * reverse_array - reverses content of an array of integers
 * @a: array of integers
 * @n: the number of elements of the array
 * Return: Always 0
 */
void reverse_array(int *a, int n)
{
int z;
int y;
for (z = 0 ; z < n-- ; z++)
{
y = a[z];
a[z] = a[n];
a[n] = y;
}
}
