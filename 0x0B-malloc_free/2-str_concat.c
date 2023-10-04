#include "main.h"

/**
 * str_concat - concatenate two strings
 * @s1: string 1
 * @s2: string 2
 * Return: Pointer
 */

char *str_concat(char *s1, char *s2)
{
int s1length = 0;
int s2length = 0;
int k;
char *conc;

if (s1 == NULL)
{
s1 = " ";
}
if (s2 == NULL)
{
s2 = " ";
}
for (k = 0 ; s1[k] != '\0' ; k++)
{
s1length++;
}
for (k = 0 ; s2[k] != '\0' ; k++)
{
s2length++;
}
conc = malloc(sizeof(char) * (s1length + s2length)+1);
if (conc == NULL)
{
return (NULL);
}
for (k = 0 ; s1[k] != '\0' ; k++)
{
conc[k] = s1[k];
}
for (k = 0 ; s2[k] != '\0' ; k++)
{
conc[s1length + k] = s2[k];
}
return (conc);
}
