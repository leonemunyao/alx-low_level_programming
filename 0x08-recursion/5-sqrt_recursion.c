#include "main.h"

int the_sqrt_recursion(int n, int j);
/**
 * _sqrt_recursion - returns the natural squareroot of a number
 * @n: the integer
 *
 * Return: Always 0
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
return (the_sqrt_recursion(n, 0));
}

/**
 * the_sqrt_recursion - recurses to find the squareroot
 * @n: the integer
 * @j: an integer to iterate
 *
 * Return: Always 0
 */
int the_sqrt_recursion(int n, int j)
{
if (j * j > n)
{
return (-1);
}
else if (j * j == n)
{
return (j);
}
return (the_sqrt_recursion(n, j + 1));
}
