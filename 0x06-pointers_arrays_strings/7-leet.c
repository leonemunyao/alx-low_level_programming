#include "main.h"

/**
 * leet - encodes a string into 1337
 * @n: the string to be encoded
 * Return: Should return a pointer to the encoded string
 */
char *leet(char *n)
{
int a;
int b;
char s1[] = "aAeEoOtTlL";
char s2[] = "4433007711";
for (a = 0 ; n[a] != '\0' ; a++)
{
for (b = 0 ; b < 10 ; b++)
{
if (n[a] == s1[b])
{
n[a] = s1[b];
}
}
}
return (n);
}
