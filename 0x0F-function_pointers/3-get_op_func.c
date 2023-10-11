#include "function_pointers.h"
#include "3-calc.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * get_op_func - selects the correct function to perform operation
 * @s: operator passed as an argument
 * Return: Always 0
 */

int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i;
i = 0;
while (ops[i].op != NULL && *ops[i].op != *s)
{
i++;
}
return (ops[i].f);
}
