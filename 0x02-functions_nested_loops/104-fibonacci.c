#include <stdio.h>

/**
 * fibo - fibonacci secuence recursion
 * @n: Integer variable
 * Return: unsigned long
 */

unsigned long fibo(int n)
{
	if (n <= 2)
		return (n);
	return (fibo(n - 1) + fibo(n - 2));
}

/**
 * main - prints firts 98 fibonacci secuence
 *
 * Return: 0
 */

int main(void)
{
	unsigned long n, i;

	n = 98;
	i = 1;
	while (i <= n)
	{
		if (i != n)
			printf("%lu, ", fibo(i));
		else
			printf("%lu\n", fibo(i));
		i++;
	}
	return (0);
}
