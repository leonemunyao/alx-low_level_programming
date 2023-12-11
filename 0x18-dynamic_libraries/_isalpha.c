#include "main.h"

/**
 * _isalpha - check if a character is an alphabetic character
 * @c: the character
 * Return: Always 0
*/
int _isalpha(int c)
{
return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
