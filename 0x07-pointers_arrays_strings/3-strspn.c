#include "main.h"
/**
 *_strspn - function that gets the length of a prefix substring
 *@s:input string
 *@accept:bytes to be accepted in the substring
 *Return:number of bytes in the initial segment of s coninting accept bytes
*/
unsigned int _strspn(char *s, char *accept)
{
int c;
unsigned int count = 0;
for (; *s != '\0'; s++)
{
c = 0;
while (accept[c] != '\0')
{
if (*s == accept[c])
{
++count;
break;
}
++c;
}
if (accept[c] == '\0')
{
return (count);
}
}
return (count);
}
