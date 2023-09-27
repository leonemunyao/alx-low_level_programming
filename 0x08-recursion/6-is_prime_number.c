#include "main.h"

int the_prime_number(int n, int j);
/**
 * is_prime_number - checks if the input is a prime number
 * @n: an integer
 *
 * Return: Always 0
 */
int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
return (the_prime_number(n, n - 1));
}

/**
 * the_prime_number - checks if the input is a prime number
 * @n: an integer
 * @j: an integer
 *
 * Return: Always 0
 */
int the_prime_number(int n, int j)
{
if (j == 1)
{
return (1);
}
else if (n % j == 0 && j > 0)
{
return (0);
}
return (the_prime_number(n, j - 1));
}
