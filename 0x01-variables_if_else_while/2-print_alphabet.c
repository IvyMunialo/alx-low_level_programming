#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main- this is the entry point
 * Description:prints the alphabet in lowercase, followed by a new line
 * Return:Always 0 (success/correct
*/
int main(void)
{
char Alphabets = 'a';
while (Alphabets <= 'z')
{
putchar(Alphabets);
Alphabets++;
}
putchar('\n');
return (0);
}
