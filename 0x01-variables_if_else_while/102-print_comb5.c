#include <stdio.h>

/**
 * main - program that prints all possible combinations of
 * two two-digit
 * The numbers should range from 0 to 99
 * Numbers must be separated by ,followed by a space
 * All numbers should be printed with two digits. 1 should be printed as 01
 * Return: 0
*/
int main(void)
{
int t1 = 48;
int m = 0;
int c;
int com = 44;
while (m <= 99)
{
c = m + 1;
while (c <= 99)
{
putchar((m / 10) + t1);
putchar((m % 10) + t1);
putchar(32);
putchar((c / 10) + t1);
putchar((c % 10) + t1);
if (m != 98 || c != 99)
{
putchar(com);
putchar(32);
}
c += 1;
}
m += 1;
}
putchar('\n');
return (0);
}
