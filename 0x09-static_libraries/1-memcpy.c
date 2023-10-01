#include "main.h"

/**
 * _memcpy - copies memory area
 * @n: number of bytes
 * @src: the source
 * @dest: the destination
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int a;
int b;

a = 0;
b = n;
for (a = 0 ; a < b ; a++)
{
dest[a] = src[a];
n--;
}
return (dest);
}
