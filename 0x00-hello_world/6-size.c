#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 *
 * this program counts the size of various variables
 */
int main(void)
{
char charType;
int intType;
longint longIntType;
longlongint longLongIntType;
float floatType;

printf("Size a char: %ld bytes\n", sizeof(charType));
printf("Size of an int: %ld bytes\n", sizeof(intType));
printf("Size of a long int: %ld bytes\n", sizeof(longIntType));
printf("Size of a long long int: %ld bytes\n", sizeof(longLongIntType));
printf("Size of a float: %ld bytes\n", sizeof(floatType));
return (0);
}
