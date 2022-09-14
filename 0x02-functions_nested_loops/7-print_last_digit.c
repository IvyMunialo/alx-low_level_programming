#include <stdio.h>
#include "main.h"
/**
 *print_last_digit - prints the last digit of numbers
 *@n: is the number that will be used for the argument
 *Return:always 0 (success)
*/
int print_last_digit(int n)
{
int last_digit = n % 10;
if (last_digit < 0)
last_digit *= -1;
putchar(last_digit + '0');
return (last_digit);
}
