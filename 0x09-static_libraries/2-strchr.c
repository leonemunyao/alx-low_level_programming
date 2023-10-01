#include "main.h"

/**
 * _strchr - locates a character string
 * @c: the character
 * @s: the string
 * Return: NULL
 */
char *_strchr(char *s, char c)
{
int j = 0;
for (j = 0 ; s[j] >= '\0' ; j++)
{
if (s[j] == c)
{
return (&s[j]);
}
}
return (0);
}
