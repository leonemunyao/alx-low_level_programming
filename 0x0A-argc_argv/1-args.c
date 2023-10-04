#include <stdio.h>

/**
 * main -  prints number of arguments
 * @argc: the count of arguments
 * @argv: the arguments array
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
(void) argv;

printf("%d\n", argc - 1);
return (0);
}
