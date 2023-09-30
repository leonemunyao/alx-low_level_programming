#include "main.h"

/**
 * _islower - prints lowercase letters
 * @c: Parameter to be checked by the function
 * Return: Should be 0 or 1
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
