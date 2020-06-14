#include <stdio.h>
/**
* main - void
*
* Return: zero
*/

int main(void)
{
int c;
c = 0;
while (c <= 9)
{
putchar('0' + c);
c = c + 1;
}
putchar('\n');
return (0);
}
