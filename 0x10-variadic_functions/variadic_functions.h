#ifndef VAR_FUNC_H
#define VAR_FUNC_H

#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char c);

/**
 * struct op - print type with print function
 * @t: print type
 * @p: print function
 */
typedef struct print
{
	char *t;
	void (*f)(va_list);
} print_t;

#endif /* VAR_FUNC_H */
