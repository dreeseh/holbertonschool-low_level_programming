#include "variadic_functions.h"
#include <stdio.h>
#include "stdarg.h"

/**
 * print_char - prints a char
 * @c: char to be printed
 * Return: is void
 */
void print_char(va_list c)
{
	printf("%c", (char)va_arg(c, int));
}

/**
 * print_int - prints an integer
 * @i: integer to be printed
 * Return: is void
 */
void print_int(va_list i)
{
	printf("%i", va_arg(i, int));
}

/**
 * print_float - prints a float
 * @f: float to be printed
 * Return: is void
 */
void print_float(va_list f)
{
	printf("%f", (float)va_arg(f, double));
}

/**
 * print_string - prints a string
 * @s: string to be printed
 * Return: is void
 */
void print_string(va_list s)
{
	char *str;

	str = va_arg(s, char *);
	if (str == NULL)
	{
		str = "(nil)";
	}
	printf("%s", str);
}

/**
 * print_all - prints anything
 * @format: list of arguments passed to the function
 * Return: is void
 */
void print_all(const char * const format, ...)
{
	unsigned int i, j;
	char *separator;
	va_list four_args;

	print_t print[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	i = 0;
	separator = "";

	va_start(four_args, format);
	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (*(print[j].t) == format[i])
			{
				printf("%s", separator);
				print[j].f(four_args);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(four_args);
}
