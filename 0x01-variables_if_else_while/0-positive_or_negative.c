#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

void trim(char *s);
/* betty style doc for function main goes there */
/**
 * main - the entry point
 *
 * Return: Should be zero
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
{
printf("%d is positive", n);
}
else if (n == 0)
{
printf("%d is zero", n);
}
else
{
printf("%d is negative", n);
}
printf("\n");
return (0);
}
