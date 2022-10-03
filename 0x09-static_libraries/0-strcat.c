#include "main.h"
/**
 * *_strcat - function commute srtings
 * @dest: param pointer to a char
 * @src: param pointer to a char
 * Return: return value of dest
*/
char *_strcat(char *dest, char *src)
{
int length = 0, dest_len = 0;
while (dest[length++])
{
dest_len++;
}
for (length = 0; src[length]; length++)
{
dest[dest_len++] = src[length];
}
return (dest);
}
