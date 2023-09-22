#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: the string to be encoded
 * Return: Should return a pointer to the encoded string
 */
char *leet(char *str)
{
int a;
int b;
char s1[] = "aAeEoOtTlL";
char s2[] = "4433007711";
for (a = 0 ; str[a] != '\0' ; a++)
{
for (b = 0 ; s1[b] != '\0' ; b++)
{
if (str[a] == s1[b])
{
str[a] = s2[b];
}
}
}
return (str);
}
