#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: bytes of s2
 *
 * Return: Always 0
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int k;
unsigned int s1length;
unsigned int s2length;
char *string;

if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
for (k = 0 ; s1[k] != '\0' ; k++)
{
s1length++;
}
for (k = 0 ; s2[k] != '\0' ; k++)
{
s2length++;
}
string = malloc(sizeof(char) * (s1length + n) + 1);
if (string == NULL)
{
return (NULL);
}
if (n >= s2length)
{
for (k = 0 ; s1[k] != '\0' ; k++)
{
string[k] = s1[k];
}
for (k = 0 ; s2[k] != '\0' ; k++)
{
string[s1length + k] = s2[k];
}
string[s1length + k] = '\0';
}
else
{
for (k = 0 ; s1[k] != '\0' ; k++)
{
string[k] = s1[k];
}
for (k = 0 ; k < n ; k++)
{
string[s1length + k] = s2[k];
}
string[s1length + k] = '\0';
}
return (string);
}
