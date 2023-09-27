#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: an integer
 * @y: an integer(power)
 *
 * Return: Always 0
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
return (x * _pow_recursion(x, y - 1));
}
