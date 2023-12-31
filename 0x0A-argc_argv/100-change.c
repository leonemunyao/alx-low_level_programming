#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints minimum number of coins
 * @argc: the count of arguments
 * @argv: the vector of  arguments
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
int coins;
int cents;

if (argc == 1 || argc > 2)
{
printf("Error\n");
return (1);
}
coins = atoi(argv[1]);
while (cents > 0)
{
if (cents >= 25)
{
cents -= 25;
}
if (cents >= 10)
{
cents -= 10;
}
if (cents >= 5)
{
cents -= 5;
}
if (cents >= 2)
{
cents -= 2;
}
if (cents >= 1)
{
cents -= 1;
}
coins += 1;
}
printf("%d\n", coins);
return (0);
}
