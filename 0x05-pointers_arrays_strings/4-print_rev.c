#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 *print_rev - prints a string in reverse
 *@s: is the string toreverse
 *successful: return no error
*/
void print_rev(char *s)
{
int len = strlen(s);
while (len--)
{
putchar(*(s + len));
}
putchar(10);
}
