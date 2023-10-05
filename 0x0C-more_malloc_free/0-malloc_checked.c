#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: the size of memory
 *
 * Return: Always 0
 */

void *malloc_checked(unsigned int b)
{
char *alloc;

alloc = malloc(b);
if (alloc == NULL)
{
exit(98);
}
else
{
return (alloc);
}
}
