#include <stdio.h>
#include "main.h"
/**
 *print_alphabet_x10 - prints the alphabet 10 times
 *Return:always 0 (success)
*/
void print_alphabet_x10(void)
{
char c, i;
for (i = 0; i <= 9; i++)
{
for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}
putchar('\n');
}
}
