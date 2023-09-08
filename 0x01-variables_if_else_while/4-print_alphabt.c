#include <stdio.h>

/**
 * main - entry point
 *
 * Return: should be 0
 */

int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
if (ch != 'q' && ch != 'e')
{
putchar(ch);
}
}
putchar('\n');
return (0);
}
