#include "main.h"
/**
 *print_diagonal - draws a diagonal line on the terminal
 *@n:is the number of times the character \ should be printed
*/
void print_diagonal(int n)
{
int line;
if (n > 0)
{
for (line = 0; line <= n; line++)
{
putchar ('_');
}
}
putchar ('\n');
}
