#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncat - concatenate two strings
 * @src: the source file
 * @dest: the destination file
 * @n: bytes from src
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
int a;
int length = strlen(dest);
for (a = 0 ; a < n && *src != '\0' ; a++)
{
dest[length + a] = *src;
src++;
}
dest[length + a] = '\0';
return (dest);
}
