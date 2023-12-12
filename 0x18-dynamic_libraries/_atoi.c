#include "main.h"

/**
 * _atoi - converts string to an integer
 * @s: pointer to a string containing the integer representation
 * Return: Always 0
*/
int _atoi(char *s)
{
int result = 0;
int sign = 1;

if (*s == '-')
{
sign = -1;
s++;
}

while (*s != '\0')
{
if (*s >= '0' && *s <= '9')
{
result = result * 10 + (*s - '0');
}
else
{
break;
}
s++;
}

return (sign *result);
}
