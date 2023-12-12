#include "main.h"

/**
 * _strncpy - copies upto n characters from source to destination
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: number of characters to copy
 * Return: Always 0
*/
char *_strncpy(char *dest, char *src, int n)
{
char *start = dest;

while (*src != '\0' && n > 0)
{
*dest = *src;
dest++;
src++;
n--;
}

while (n > 0)
{
*dest = '\0';
dest++;
n--;
}

return (start);
}
