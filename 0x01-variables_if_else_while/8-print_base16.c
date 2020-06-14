#include <stdio.h>
/**
 * main - void
 * Return: zero
 */
int main(void)
{
char a;
char b;
a = 'a';
b = '0';
while (b <= '9')
{
putchar(b);
b = b + 1;
}
while (a <= 'f')
{
putchar(a);
a = a + 1;
}
putchar('\n');
return (0);
}
