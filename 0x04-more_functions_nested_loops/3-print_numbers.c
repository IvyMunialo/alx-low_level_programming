#include <stdio.h>
#include "main.h"
/**
 *print_numbers - prints the numbers
 *Return:always 0 (success)
*/
void print_numbers(void)
{
int a = '0';
while (a != '9' + 1)
{
putchar(a);
a++;
}
putchar('\n');
}
