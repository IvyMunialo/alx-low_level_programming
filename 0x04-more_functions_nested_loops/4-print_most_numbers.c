#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 *print_most_numbers - print 0 to 9
 *
 *
 */
void print_most_numbers(void)
{
int n = 0;
for (n = 0; n < 10; n++)
{
if (n == 2 || n == 4)
{
continue;
}
else
{
_putchar(n + '0');
}
}
_putchar('\n');
}
