#include <stdio.h>

void __attribute__((constructor)) calledFirst(void);

/**
 * calledFirst - prints the messages before main is exe
 * Return: is void
 */

void calledFirst(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
