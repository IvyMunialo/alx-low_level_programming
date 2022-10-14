#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *print_numbers -  prints numbers, followed by a new line
 *@n:is the number of integers passed to the function
 *@separator: is the string to be printed between numbers
 *@...: A variable number of numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int count;
va_start(ap, n);
for (count = 0; count < n; count++)
{
printf("%d", va_arg(ap, int));
if (count != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(ap);
}

