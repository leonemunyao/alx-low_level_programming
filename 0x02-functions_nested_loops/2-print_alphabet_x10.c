#include "main.h"

/**
 * print_alphabet_x10 - printing the alphabets
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
int a;
int b;

for (a = 0 ; a <= 10 ; a++)
{
for (b = 'a' ; b <= 'z' ; b++)
{
_putchar(b);
}
}
_putchar('\n');
}
