#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * @separator: the string to be printed between numbers
 * @n: numbers of ints passed to function
 * Return: is void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list reeses_list;
	unsigned int counter;

	/* initialize argument list */
	va_start(reeses_list, n);

	/* step through string */
	for (counter = 0 ; counter < n ; counter++)
	{
		/* print as they come*/
		printf("%d", va_arg(reeses_list, int));

		/* put separator inbetween n elements */
		if (separator != NULL && counter < n - 1)
		{
			printf("%s", separator);
		}
	}

	/* edge-case */
	if (separator == NULL)
	{
		separator = "";
	}

	printf("\n");
	/* clean up memory */
	va_end(reeses_list);
}
