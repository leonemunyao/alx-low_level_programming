#include "main.h"

/**
 * _strcpy - copy characters
 * @dest: pointer to the destination buffer where the string will be copied
 * @src: pointer to the source string that will be copied
 * Return: Always 0
*/
char *_strcpy(char *dest, char *src)
{
char *start = dest;

while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';

return (start);
}

