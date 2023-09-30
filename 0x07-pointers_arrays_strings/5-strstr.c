#include "main.h"

/**
 * _strstr - locates a substring
 * @needle: the substring
 * @haystack: the string
 * Return: Always 0
 */
char *_strstr(char *haystack, char *needle)
{
int j;
while (*haystack)
{
for (j = 0 ; needle[j] ; j++)
{
if (*haystack == needle[j])
{
return (haystack);
}
}
haystack++;
}
return ('\0');
}
