#include <stdio.h>
#include "main.h"
/**
 * print_most_numbers - prints numbers except 2 and 4
 * Description:prints the numbers except 2 and 4 then new line
 * Return:Always 0 (success/correct
*/
void print_most_numbers(void)
{
int a = '0';
for (a = '0'; a <= '9'; a++)
{
if (a == '2' && a == '4')
{
continue;
}
else
{
putchar(a);
}
putchar('\n');
}
}
