#include "main.h"

/**
 * _strspn - calculates the length of the initial segment of s
 * @s: pointer to the string
 * @accept: pointer to set the character to match
 * Return: Always 0
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;

while (*s != '\0' && _strchr(accept, *s) != NULL)
{
count++;
s++;
}
return (count);
}
