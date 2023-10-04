#include "main.h"

/**
 * _strdup - returns a pointer
 * @str: the string
 *
 * Return: str
 */

char *_strdup(char *str)
{
char *m;
int count = 0;
int j;
if (str == NULL)
{
return (NULL);
}
for (j = 0 ; str[j] != '\0' ; j++)
{
count++;
}
m = malloc(sizeof(char) * count + 1);
if (m == NULL)
{
return (NULL);
}
for (j = 0 ; str[j] != '\0' ; j++)
{
m[j] = str[j];
}
return (0);
}
