#include "main.h"
#include <stdio.h>
/**
 *print_most_numbers - print 0 to 9
 */
void print_most_numbers(void)
{
int c = 0;
for (c = 0; c <= 9; c++)
{
if (c !=2 && c != 4)
{
_putchar ((c % 10) + '0');
}
}
_putchar('\n');
}
