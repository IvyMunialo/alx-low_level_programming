#include <stdio.h>
#include <string.h>
/**
 *main- is the entry point
 *Description:prints _putchar followed by new line
 *Return: always 0 (success)
*/
int main(void)
{
char Ivy_M[] = "_putchar";
int n = 0;
for (n = 0; n < strlen(Ivy_M); n++)
{
putchar (Ivy_M[n]);
}
putchar ('\n');
return (0);
}
