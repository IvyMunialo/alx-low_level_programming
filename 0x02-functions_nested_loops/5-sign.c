#include <stdio.h>
#include "main.h"
/**
 *print_sign - compares and prints results
 *@n: is the integer that will be used for the argument
 *Return:always 0 (success)
 */
int print_sign(int n)
{
if (n > 0)
{
putchar('+');
}
{
return (1);
}
if (n == 0)
{
putchar('=');
}
{
return (0);
else
{
putchar('-');
}
{
return (-1);
}
}
