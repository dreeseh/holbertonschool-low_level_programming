#include <stdio.h>
/**
 * main - prints the name from which the program was comiled
 * @argc: integer type of arguments; contains total number of arguments
 * @argv: array of character pointers; holds all the parameters
 * Return: is zero
 */
int main(int argc, char *argv[])
{
	argc++;
	printf("%s\n", argv[0]);
	return (0);
}
