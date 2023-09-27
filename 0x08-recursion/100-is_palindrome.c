#include "main.h"

int the_palindrome(char *s, int i, int j);
int another_palindrome(char *s);
/**
 * is_palindrome - checks if the string is palindrome
 * @s: the string
 *
 * Return: ALways 0
 */
int is_palindrome(char *s)
{
if (*s == 0)
{
return (1);
}
return (the_palindrome(s, 0, another_palindrome(s)));
}

/**
 * another_palindrome - returns the length of the string
 * @s: the string
 *
 * Return: Always 0
 */
int another_palindrome(char *s)
{
if (*s == '\0')
{
return (0);
}
return (1 + another_palindrome(s + 1));
}

/**
 * the_palindrome - does the recursion
 * @s: the string
 * @i: an integer iterator
 * @j: length of the string
 *
 * Return: Always 0
 */
int the_palindrome(char *s, int i, int j)
{
if (*(s + i) != *(s + j - 1))
{
return (0);
}
else if (i >= j)
{
return (1);
}
return (the_palindrome(s, i + 1, j - 1));
}
