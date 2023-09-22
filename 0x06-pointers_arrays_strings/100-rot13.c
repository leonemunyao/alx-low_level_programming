#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: the string to be encoded
 *
 * Return: the encoded string
 */
char *rot13(char *str)
{
int a;
int b;
char s1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char s2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (a = 0 ; str[a] != '\0' ; a++)
{
for (b = 0 ; s1[b] != '\0' ; b++)
{
if (str[a] == s1[b])
{
str[a] = s2[b];
break;
}
}
}
return (str);
}
