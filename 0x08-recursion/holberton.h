/* Header file for holberton school */

/* putchar */
int _putchar(char c);

/* print alphabet */
void print_alphabet(void);

/* print alphabet 10x */
void print_alphabet_x10(void);

/* is lower function */
int _islower(int c);

/* prints every hour of every day */
void jack_bauer(void);

/* prints the last digit */
int print_last_digit(int);

/* prints the alphabet 2x */
int _isalpha(int c);

/* prints the sign of a number */
int print_sign(int n);

/* prints the absolute value of a number */
int _abs(int);

/* determines if the function is uppercase or not */
int _isupper(int c);

/* checks for a digit 0 - 9 */
int _isdigit(int c);

/* multiplies two integers */
int mul(int a, int b);

/* prints numbers 0-9 */
void print_numbers(void);

/* prints 0-9 except for 2 & 4  */
void print_most_numbers(void);

/* prints the numbers 0 -14 ten times  */
void more_numbers(void);

/* prints a triangle  */
void print_triangle(int size);

/* resets pointer to 98 */
void reset_to_98(int *n);

/* swaps the values of 2 integers */
void swap_int(int *a, int *b);

/* returns the length of a string */
int _strlen(char *s);

/* a function that prints a string   */
void _puts(char *str);

/* prints a string in reverse  */
void print_rev(char *s);

/* a function that reverses a string  */
void rev_string(char *s);

/* prints every other character of a string  */
void puts2(char *str);

/* prints the 2nd half of a string */
void puts_half(char *str);

/* copies a string */
char *_strcpy(char *dest, char *src);

/* prints n elements of an array of integers */
void print_array(int *a, int n);

/* my very own memset */
char *_memset(char *s, char b, unsigned int n);

/* function that copies memory area */
char *_memcpy(char *dest, char *src, unsigned int n);

/* locates a char in a string  */
char *_strchr(char *s, char c);

/* returns # of bytes in s  */
unsigned int _strspn(char *s, char *accept);

/* searches a string for the occorance of str 2  */
char *_strpbrk(char *s, char *accept);

/* locates a substring */
char *_strstr(char *haystack, char *needle);

/* prints a 2d array */
void print_chessboard(char (*a)[8]);

/* prints the sum of 2 diagnols of a square */
void print_diagsums(int *a, int size);

/* sets the value of a pointer to char */
void set_string(char **s, char *to);

/* prints a string */
void _puts_recursion(char *s);

/* prints a string in reverse */
void _print_rev_recursion(char *s);

/* returns the length of a string */
int _strlen_recursion(char *s);

/* prints the factorial of a number */
int factorial(int n);

/* returns x raised to the power of y  */
int _pow_recursion(int x, int y);

/* finds natural sq root of a number */
int _sqrt_recursion(int n);

/* finds a prime number */
int is_prime_number(int n);

/* returns 1 for palindrome 0 for not */
int is_palindrome(char *s);

int wildcmp(char *s1, char *s2);
