#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @n: number of bytes
 * @b: the address of the memory to print
 * @s: the size of the memory to print
 *
 * Return: A pointer to the memory area 's'
 */
char *_memset(char *s, char b, unsigned int n)
{
int a = 0;
for (a = 0 ; n > 0 ; a++)
{
s[a] = b;
n--;
}
return (s);
}
