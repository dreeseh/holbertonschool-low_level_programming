#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include "string.h"
/**
 * get_op_func - selects the correct funtion to perform opperation
 * @s: operator passed as argument to the program
 * @get_op_func: returns a pointer to the correct function
 * Return: pointer to the correct function
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
	while (ops[i].op && strcmp(ops[i].op, s))
	{
		i++;
	}
	if (ops[i].op == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	return (ops[i].f);
}
