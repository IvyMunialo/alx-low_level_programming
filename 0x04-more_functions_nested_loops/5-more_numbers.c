#include <stdio.h>
#include "main.h"
/**
 *more_numbers - prints the numbers more times
 *Return:always 0 (success)
*/
void more_numbers(void)
{
int c, count;
for (count = 0; count <= 9; count++)
{
for (c = 0; c <= 14; c++)
{
if (c > 9)
{
putchar((c / 10) + '0');
}
{
putchar((c % 10) + '0');
}
}
putchar('\n');
}
}
