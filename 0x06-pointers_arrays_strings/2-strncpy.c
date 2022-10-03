#include "main.h"
/**
 * _strncpy - function to copy a string
 * @dest: param pointer to a char
 * @src: param pointer to a char
 *@n:maximum bytes to be used
 * Return: return value of dest
*/
char *_strncpy(char *dest, char *src, int n)
{
int v;
for (v = 0; v < n && src[v] != '\0'; v++)
dest[v] = src[v];
for (; v < n; v++)
dest[v] = '\0';
return (dest);
}
