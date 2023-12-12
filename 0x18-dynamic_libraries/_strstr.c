#include "main.h"

/**
 * _strstr - locates the first occurrence of substring needle
 * @haystack: pointer to the string
 * @needle: pointer to the substring to search for
 * Return: Always 0
*/
char *_strstr(char *haystack, char *needle)
{
while (*haystack != '\0')
{
char *h = haystack;
char *n = needle;

while (*n != '\0' && *h == *n)
{
h++;
n++;
}

if (*n == '\0')
{
return (haystack);
}
haystack++;
}

return (NULL);
}
