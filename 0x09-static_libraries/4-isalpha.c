#include "main.h"

/**
 * _isalpha - checks if c is in lowercase  or uppercase
 * @c: Parameter to be returned
 * Return: 1 or 0
 */

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
