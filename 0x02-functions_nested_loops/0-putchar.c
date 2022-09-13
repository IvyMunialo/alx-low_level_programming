#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 *main- is the entry point
 *Description:prints _putchar followed by new line
 *Return: always 0 (success)
*/
int main(void)
{
char Ivy_M[12] = "_putchar";
int n = 0, length = 0;
length = strlen(Ivy_M);
for (n = 0; n < length; n++)
{
_putchar (Ivy_M[n]);
}
putchar ('\n');
return (0);
}
