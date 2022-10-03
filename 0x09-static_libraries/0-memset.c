#include "main.h"
/**
*_memset - is a function to set a a string
*@s:the string to copy to
*@b:the character to be copied to
*@n:The number of characters to be copied to.
*Return: pointer to dest
*/
char *_memset(char *s, char b, unsigned int n)
{
int i;
for (i = 0; n; i++)
{
*(s + i) = b;
n--;
}
return (s);
}
