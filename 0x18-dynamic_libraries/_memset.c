#include "main.h"

/**
 * _memset - fills the first n byte of the memory area pointed by s
 * @s: pointer to the memory area
 * @b: value to be set
 * @n: number of bytes to be set
 * Return: Always 0
*/
char *_memset(char *s, char b, unsigned int n)
{
char *mem_are = s;

while (n > 0)
{
*s = b;
s++;
n--;
}

return (mem_are);
}
