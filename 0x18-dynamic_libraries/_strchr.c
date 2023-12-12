#include "main.h"

/**
 * _strchr - locates the first occurence of character c in the string
 * @s: pointer to the string
 * @c: character to locate
 * Return: Always 0
*/
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}

return (NULL);
}
