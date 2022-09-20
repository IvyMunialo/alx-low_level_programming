#include <stdio.h>
#include "main.h"
/**
 *more_numbers - prints the numbers more times
 *Return:always 0 (success)
*/
void more_numbers(void)
{
int c, i;
for (i = 0; i <= 9; i++)
{
for (c = '0'; c <= '14'; c++)
{
putchar(c);
}
putchar('\n');
}
}
