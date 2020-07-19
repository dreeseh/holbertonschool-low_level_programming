#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings
 * @separator: string to be printed between strings
 * @n: number of strings to be passed
 * Return: is void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	/* name list */
	va_list reeses_list;
	/* declare data types */
	unsigned int counter;
	char *list_items;

	/* edge-case */
	if (separator == NULL)
	{
		separator = "";
	}
/* initialize list */
	va_start(reeses_list, n);
	/* count */
	for (counter = 0 ; counter < n ; counter++)
	{
		/* edge case: string = NULL */
		list_items = va_arg(reeses_list, char *);
		if (list_items == NULL)
		{
			printf("(nil)");
		}
		/* get next item in string & print*/
		else
		{
			printf("%s", list_items);
		}
		/* print separator */
		if (counter < n - 1 && separator)
		{
			printf("%s", separator);
		}
	}
	/* new line */
	printf("\n");
	/* clean up memory*/
	va_end(reeses_list);
}
