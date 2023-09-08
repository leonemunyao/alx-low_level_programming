#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - entry point
 *
 * Return: returns zero
 */
int main(void)
{
int n;
int z;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
z = n % 10;
if (z > 5)
printf("Last digit of %d is %d and is greater than 5", n, z);
else if (z == 0)
printf("Last digit of %d is %d and is zero", n, z);
else if (z < 6 && z != 0)
printf("Last digit of %d is %d and is less than 6 and not zero", n, z);
printf("\n");
return (0);
}
