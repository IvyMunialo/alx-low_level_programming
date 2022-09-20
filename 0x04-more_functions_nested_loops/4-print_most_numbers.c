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
int c = 0;
for (c = 0; c < 10; c++)
{
if (c == 2 || c == 4)
{
continue;
}
else
{
_putchar(c + '0');
}
}
_putchar('\n');
}
