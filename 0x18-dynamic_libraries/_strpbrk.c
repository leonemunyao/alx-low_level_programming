#include "main.h"

/**
 * _strpbrk - searches the string s for any characters in accept
 * @s: pointer to the string
 * @accept: pointer to the set of all characters to search for
 * Return: Always 0
*/
char *_strpbrk(char *s, char *accept)
{
while (*s != '\0')
{
if (_strchr(accept, *s) != NULL)
{
return (s);
}
s++;
}

return (NULL);
}
