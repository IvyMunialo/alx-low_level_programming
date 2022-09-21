#include "main.h"
#include <stdio.h>
/**
 *print_most_numbers - print 0 to 9
  *Return:always 0 (success)
*/
void print_most_numbers(void)
{
int c;
for (c = 0; c <= 9; c++)
{
if (c !=2 && c != 4)
{
_putchar ((c % 10) + '0');
}
}
_putchar('\n');
}
