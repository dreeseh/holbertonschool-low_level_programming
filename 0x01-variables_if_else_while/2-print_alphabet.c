#include <stdio.h>
/**
 * main - uses function getchar to print the alphabet
 * Return: always zero
 */
int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
