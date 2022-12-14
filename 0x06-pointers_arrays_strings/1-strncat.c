#include "main.h"
/**
 * _strncat - function to concatenate strings and use specified bytes from src
 * @dest: param pointer to a char
 * @src: param pointer to a char
 *@n:maximum bytes to be used
 * Return: return value of dest
*/
char *_strncat(char *dest, char *src, int n)
{
int length = 0, dest_len = 0;
while (dest[length++])
{
dest_len++;
}
for (length = 0; src[length] && length < n; length++)
{
dest[dest_len++] = src[length];
}
return (dest);
}
