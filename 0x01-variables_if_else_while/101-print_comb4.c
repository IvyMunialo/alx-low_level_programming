#include <stdio.h>

/**
 * main - program that prints all possible different combinations of
 * three digits
 * Numbers must be separated by ,followed by a space
 * The two digits must be different
 * 012, 120, 102, 021, 201, 210 are considered the same combination
 * Return: 0
*/
int main(void)
{
int s1 = 48;
int s2, s3;
int com = 44;
while (s1 <= 57)
{
s2 = s1 + 1;
while (s2 <= 57)
{
s3 = s2 + 1;
while (s3 <= 57)
{
putchar(s1);
putchar(s2);
putchar(s3);
if (s1 != 55 || s2 != 56 || s3 != 57)
{
putchar(com);
putchar(32);
}
s3 += 1;
}
s2 += 1;
}
s1 += 1;
}
putchar('\n');
return (0);
}
