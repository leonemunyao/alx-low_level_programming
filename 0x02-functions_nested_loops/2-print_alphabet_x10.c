#include "main.h"

/**
 * _putchar - writes a character to the standard output
 * @c: The character to print
 *
 * Return: On success 1. On error, -1 is returned.
 */
void _putchar(char c)
{
write(1, &c, 1);
}

/**
 * print_alphabet_x10 - prints the alphabet in lowercase 10 times
 */

void print_alphabet_x10(void)
{
char letter = 'a';

for (int i = 0; i < 10; i++)
{
for (int j = 0; j < 26; j++)
{
_putchar(letter);
letter++;
}
_putchar('\n');
letter = 'a';
}
}

/**
 * main - entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
print_alphabet_x10();
return (0);
}

