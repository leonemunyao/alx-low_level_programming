#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcode of its own main function
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
int bytes, k;
char *p;

if (argc != 2)
{
printf("Error\n");
exit(1);
}

bytes = atoi(argv[1]);
if (bytes < 0)
{
printf("Error\n");
exit(2);
}

p = (char *)main;

for (k = 0 ; k < bytes ; k++)
{
if (k == bytes - 1)
{
printf("%02hhx\n", p[k]);
break;
}
printf("%02hhx\n", p[k]);
}
return (0);
}
