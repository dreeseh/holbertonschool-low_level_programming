#include <stdio.h>
/**
 * main - void
 * Return: zero
 */

int main(void)
{
char n;
n = 'z';
while (n >= 'a')
{
putchar(n);
n = n - 1;
}
putchar('\n');
return (0);
}
