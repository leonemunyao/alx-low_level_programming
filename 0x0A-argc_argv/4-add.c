#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - add two positive numbers
 * @argc: the count of arguments
 * @argv: the vector of arguments
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
int num1;
int num2;
int result;

for (num1 = 1 ; num1 < argc ; num1++)
{
for (num2 = 0 ; argv[num1][num2] != '\0' ; num2++)
{
if (!isdigit(argv[num1][num2]))
{
printf("Error\n");
return (1);
}
}
result += atoi(argv[num1]);
}
printf("%d\n", result);
return (0);
}
