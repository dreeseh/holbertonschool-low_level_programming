#include <stdio.h>
/**
 * main - is void
 *
 * Return: zero
 *
 */
int main(void)
{
int c;

c = 0;
while (c <= 9)
{
putchar('0' + c);
if (c != 9)
{
putchar(',');
putchar(' ');
}
else
{
putchar('\n');
}
c++;
}
return (0);
}
