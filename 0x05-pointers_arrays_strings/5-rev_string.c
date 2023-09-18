#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string
 * Return: void
 */
void rev_string(char *s)
{
int a;
int result = 0;
for (a = 0 ; s[a] != '\0' ; a++)
{
result++;
}
for (a = 0 ; a < result / 2 ; a++)
{
char b;
b = s[a];
s[a] = s[result - 1 - a];
s[result - 1 - a] = b;
}
}
