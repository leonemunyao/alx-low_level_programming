#include "main.h"

/**
 * _isdigit - checks if its a digit
 * @c: Parameter to be returned
 * Return: 0 or 1
 */

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
}
