#include "main.h"

/**
 * _strncat - copy characters
 * @dest: pointer to the destination buffer where the string will be copied
 * @src: pointer to the source string that will be copied
 * @n: number of characters
 * Return: Always 0
*/
char *_strncat(char *dest, char *src, int n)
{
char *start = dest;

while (*dest != '\0')
{
dest++;
}

while (*src != '\0' && n > 0)
{
*dest = *src;
dest++;
src++;
n--;
}

*dest = '\0';
return (start);
}
