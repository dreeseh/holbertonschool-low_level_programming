#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - int
 *
 * Return: is zero
 */
int main(void)
{
	int d, a, b, c;

	for (d = 48; d <= 57; d++)
	{
		for (a = 48; a <= 56; a++)
		{
			for (b = d; b <= 57; b++)
			{
				for (c = 48; c <= 57; c++)
				{
					putchar(d);
					putchar(a);
					putchar(32);
					putchar(b);

if (d == b)
					{
if (c <= a)
{
c = a + 1;
}
					}

					putchar(c);
					if (d == 57 && a == 56 && b == 57 && c == 57)
					{
						putchar(10);
					}
					else
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}

	return (0);
}
