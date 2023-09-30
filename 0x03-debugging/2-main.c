#include <stdio.h>
#include "main.h"

/**
* main - prints the largest of 3 integers
* Return: 0
*/

int main(void)
{
int a, b, c;
int largest;

a = 972;
b = -98;
c = 0;

/**
 * largest_number - prints the largest number
 * @a: first number
 * @b: second number
 * @c: third number
 * Return: largest
 */

int largest_number(int a, int b, int c)
{
int largest;

if (a >= b && a >= c)
{
largest = a;
}
else if (b >= a && b >= c)
{
largest = b;
}
else
{
largest = c;
}

return (largest);
}

printf("%d is the largest number\n", largest);

return (0);
}
