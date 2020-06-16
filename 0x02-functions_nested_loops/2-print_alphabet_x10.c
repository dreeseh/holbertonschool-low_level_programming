#include "holberton.h"
/**
 * print_alphabet_x10 - prints alphabet 10 times.
 *
 * Return: is always zero.
 *
 */
void print_alphabet_x10(void)
{
char ch;
int t = '0';

for (; t <= '9' ; t++)
{
for (ch = 'a' ; ch <= 'z' ; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
return;
}
