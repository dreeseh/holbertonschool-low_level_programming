#include "holberton.h"
/**
 * print_alphabet - function that prints the alphabet in lowercase letters.
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
if (ch != 'e' && ch != 'q')
_putchar(ch);
}
_putchar('\n');
return;
}
