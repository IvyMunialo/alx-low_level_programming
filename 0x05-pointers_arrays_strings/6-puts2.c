#include "main.h"
#include <stdio.h>
/**
 *puts2 - prints every other character of a string
 *@str: is the string to print
 *Description: prints a string
 *on success: return no error
*/
void puts2(char *str)
{
int c = 0;
while (*(str + c) != '\0')
{
if (c % 2 == 0)
putchar (*(str + c));
c++;
}
putchar(10);
}
