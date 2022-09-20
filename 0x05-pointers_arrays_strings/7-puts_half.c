#include "main.h"
/**
 *puts_half - function that prints half a string
 *@str: string to be manipulated
 *
 *
*/
void puts_half(char *str)
{
int c = 0, position = 0;
while (str[position] != '\0')
{
position++;
}
c = position / 2;
if (position % 2 != 0)
{
c++;
}
while (str[c] != '\0')
{
_putchar(str[c]);
n++;
}
_putchar('\n');
}
