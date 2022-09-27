#include "main.h"
/**
 *_memcpy - copies memory area
 *@dest: destination string
 *@src: source string
 *@n: buffer length
 *Return: new string
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
int c;
for (c = 0; n; c++)
{
dest[c] = src[c];
n--;
}
return (dest);
}
