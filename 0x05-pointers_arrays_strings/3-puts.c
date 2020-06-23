#include "holberton.h"
/**
 * _puts - prints a string
 * @str: string from 3-main.c
 * return: null
 */
void _puts(char *str)
{
	int speller = 0;

	while (str[speller] != '\0')
	{
		_putchar(str[speller]);
		speller++;
	}
	_putchar('\n');
}
