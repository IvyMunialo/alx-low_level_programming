#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main- this is the entry point
 * Description:prints all the numbers of base 16 in lowercase
 * Return:Always 0 (success/correct)
*/
int main(void)
{
int n = 48;
char ch = 'a';
for (n = 48; n <= 57; n++)
{
putchar(n);
}
for (ch = 'a'; ch <= 'f'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
