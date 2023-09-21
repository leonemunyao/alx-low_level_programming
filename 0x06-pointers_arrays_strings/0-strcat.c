#include "main.h"

/**
 * _strcat - concatenates two strings
 * @src: the source string
 * @dest: the destination string
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
int destlength = 0;
int srclength = 0;
int a;
for (a = 0 ; dest[a] != '\0' ; a++)
{
destlength++;
}
for (a = 0 ; src[a] != '\0' ; a++)
{
srclength++;
}
for (a = 0 ; a <= srclength ; a++)
{
dest[destlength + a] = src[a];
}
return (dest);
}
