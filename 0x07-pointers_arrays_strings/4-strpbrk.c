#include "main.h"
/**
 *_strpbrk - function that searches a string for any of a set of bytes
 *@s:pointer to string to be searched
 *@accept: string with set of bytes to search on string s
 *Return: pointer to byte in s matching any accpet byte, or NULL if not found
*/
char *_strpbrk(char *s, char *accept)
{
int c = 0;
int i = 0;
for (; s[d] != '\0'; d++)
{
c = 0;
while (accept[c] != '\0')
{
if (s[d] == accept[c])
{
return (&s[d]);
}
++c;
}
}
return (0);
}
