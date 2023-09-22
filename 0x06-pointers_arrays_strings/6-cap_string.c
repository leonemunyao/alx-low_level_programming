#include "main.h"

/**
 * cap_string - capitalizes all the words of a string
 * @str: the string
 * Return: the string
 */
char *cap_string(char *str)
{
int a;
int b;
char c[] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}', ' ', '\t', '\n'};
for (a =  0 ; str[a] != '\0' ; a++)
{
if (a == 0 && str[a] >= 'a' && str[a] <= 'z')
{
str[a] = str[a] - 32;
}
for (b = 0 ; c[b] != '\n' ; b++)
{
if (c[b] == str[a] && (str[a + 1] >= 'a' && str[a + 1] <= 'z'))
{
str[a + 1] = str[a + 1] - 32;
}
}
}
return (str);
}
