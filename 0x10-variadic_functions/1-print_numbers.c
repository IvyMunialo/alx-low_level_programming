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
unsigned int index;
va_start(ap, n);
for (index = 0; index < n; index++)
{
printf("%d", va_arg(ap, int);
if (index != (n - 1) && separator != (NULL)
printf("%s", separator);
}
printf("\n");
va_end(ap);
}

