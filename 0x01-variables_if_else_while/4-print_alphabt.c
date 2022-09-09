#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main- this is the entry point
 * Description:prints the alphabet in lowercase, and uppercase then new line
 * Return:Always 0 (success/correct
*/
int main(void)
{
char Alphabets = 'a';
for (Alphabets = 'a'; Alphabets <= 'z'; Alphabets++)
{
if (Alphabets == 'q' || Alphabets == 'e')
{
continue;
}
else
{
putchar(Alphabets);
}
}
putchar('\n');
return (0);
}
