#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - adds all list items
 * @n: number of items in list
 * Return: the sum of all items in list
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list my_list;
	unsigned int counter;
	int sum;

	/* initialize list */
	va_start(my_list, n);

	/* edge-case 0 or less */
	if (n == 0)
	{
		return (0);
	}

	/* step through list */
	sum = 0;
	for (counter = 0 ; counter < n ; counter++)
	{
		/* get next list item */
		sum += va_arg(my_list, int);
	}

	/* clean memory */
	va_end(my_list);

	/* returns the sum */
	return (sum);
}
