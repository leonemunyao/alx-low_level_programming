#include "main.h"

/**
 * create_array -  creates an array of chars
 * @size: the size of array
 * @c: the character
 * Return: str
 */

char *create_array(unsigned int size, char c)
{
char *str;
unsigned int j;

str = malloc(sizeof(char) * size);
if (size == 0 || str == NULL)
{
return (NULL);
}
for (j = 0; j < size; j++)
{
str[j] = c;
}
return (str);
}
