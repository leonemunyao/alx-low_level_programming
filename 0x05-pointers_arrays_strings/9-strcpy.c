#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - copies the string pointed to by src
 * @dest: the destination
 * @src: the source
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
int m;
for (m = 0 ; src[m] != '\0' ; m++)
{
dest[m] = src[m];
dest[m] = '\0';
}
return (dest);
}
