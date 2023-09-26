#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string
 * @accept: source of bytes
 * Return: Always 0
 */unsigned int _strspn(char *s, char *accept)
{
unsigned int k;
int l;

k = 0;
while (*s)
{
for (l = 0 ; accept[l] ; l++)
{
if (*s == accept[l])
{
k++;
break;
}
else if (accept[l + 1] == '\0')
{
return (k);
}
}
s++;
}
return (0);
}
