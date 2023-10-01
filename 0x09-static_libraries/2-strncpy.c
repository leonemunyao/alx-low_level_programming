#include "main.h"

/**
 * _strncpy - copies a string
 * @n: number of bytes
 * @src: the source string
 * @dest: the destination string
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
for (i = 0 ; i < n && src[i] != '\0' ; i++)
{
dest[i] = src[i];
}
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
