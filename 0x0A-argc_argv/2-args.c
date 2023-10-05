#include <stdio.h>

/**
 * main - prints arguements
 * @argc: the count of arguments
 * @argv: the arguments vector
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
int m;
for (m = 0 ; m < argc ; m++)
{
printf("%s\n", argv[m]);
}
return (0);
}
