#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
#include <string.h>

void trim(char *s);
/* betty style doc for function main goes there */
/**
 * main - the entry point
 *
 * Return: Should be zero
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
printf("%d is positive", n);
else if (n == 0)
printf("%d is zero", n);
elise
printf("%d is negative", n);
printf("\n");
trim (s);
printf("\nAfter:\n\n")
printf("%s\n")
return (0);
}

void trim(char *s)
{
int i = strlen(s) - 1;
while (i > 0)
{
if (s[i] == '' || s[i] == '\n' || s[i] == '\t') 
i--;
else break;
}
s[i + 1] = '\0';
}
