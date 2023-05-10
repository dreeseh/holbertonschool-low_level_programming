#include <stdio.h>
#include <stdlib.h>

/**
 * interpolation_search - searches using the Interpolation search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: the first index where value is located
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t lo = 0, hi = (size - 1), pos;

	if (!array)
		return (-1);

	while (lo <= hi)
	{
		pos = lo + (((double)(hi - lo) / (array[hi] - array[lo])) *
			    (value - array[lo]));

		if (pos > hi)
		{
			printf("Value checked array[%lu] is out of range\n",
			       pos);
			return (-1);
		}

		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		if (array[pos] < value)
			lo = pos + 1;
		else
			hi = pos - 1;
	}
	return (-1);
}
