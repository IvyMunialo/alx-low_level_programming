#include <stdio.h>

/**
 * main - program that prints all possible different combinations of two digits
 * Numbers must be separated by ,followed by a space
 * The two digits must be different
 * 01 and 10 are considered the same combination of the two digits 0 and 1
 * Return: 0
*/
int main(void)
{
int t1 = 48;
int t2;
int com = 44;
while (n1 <= 57)
{
t2 = t1 + 1;
while (t2 <= 57)
{
putchar(t1);
putchar(t2);
if (t1 != 56 || t2 != 57)
{
putchar(com);
putchar(32);
}
n2 += 1;
}
n1 += 1;
}
putcha
