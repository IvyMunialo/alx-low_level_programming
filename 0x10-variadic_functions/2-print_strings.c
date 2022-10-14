#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings -  prints strings, followed by a new line
 *@n:is the number of integers passed to the function
 *@separator: is the string to be printed between numbers
 *@...: A variable number of numbers
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int c;
char *str;
va_start(ap, n);
for (c = 0; c < n; c++)
{
str = va_arg(ap, char *);
if (str)
printf("%s", str);
else
printf("(nil)");
if (c < n - 1)
if (separator)
prinf("%s", separator);
}
printf("\n");
va_end(ap);
}

