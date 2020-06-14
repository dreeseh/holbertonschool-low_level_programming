#include <stdio.h>
/**
 * main - void
 *
 * Return: zero
 *
 */
int main(void)
{
int n;
int d;

n = 0;
while (n <= 99)
{
d = n / 10;
putchar ('0' + d);
d = n % 10;
putchar('0' + d);
if (n != 99)
{
putchar (',');
putchar (' ');
}
else
{
putchar('\n');
}
n = n + 1;
}
return (0);
}
