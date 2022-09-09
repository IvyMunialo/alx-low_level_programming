#include <stdio.h>
/**
 *main - This is the entry function
 *Description: Prints all combination of single digits seperated by commas
 *Return: 0 is executed successfully
*/
int main(void)
{
int n = 0;
for (n = 48; n <= 57; n++)
{
putchar(n);
if (n != 57)
{
putchar(',');
}
else
{
continue;
}
putchar(' ');
}
putchar('\n');
return (0);
}
