#include "variadic_functions.h"
#include <stdarg.h>
/**
 *sum_them_all -returns the sum of all its parameters
 *@n:number of arguments
 *
 *Return: sum of the numbers
 */
int sum_them_all(const unsigned int n, ...)
{
va_list ap;
unsigned int n;
int sum = 0;
if (n == 0)
return (0);
va_start(ap, n);
for (n = 0; n < args; n++)
sum += va_arg(ap, int);
va_end(ap);
return (sum);
}

