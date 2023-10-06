#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - allocates memory of an array
 * @nmemb: the block of memory
 * @size: size of the integer
 *
 * Return: Always 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
int n;
char *calloc;

if (nmemb == 0 || size == 0)
{
return (NULL);
}
calloc = malloc(nmemb * size);
if (calloc == NULL)
{
return (NULL);
}
for (n = 0 ; n < (nmemb * size) ; n++)
{
calloc[n] = 0;
}
return (calloc);
}
