#include "main.h"
/**
 *_memset - function that fils memory with costant byte
 *@n: is the length of buffer
 *@s: is the source string
 *@b: is the constant byte
 *Return: new string
*/
char *_memset(char *s, char b, unsigned int n)
{
unasigned int i = 0;
while (i < n)
{
*(s + i) = b;
i++;
}
return (s);
}