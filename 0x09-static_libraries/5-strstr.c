#include "main.h"
/**
 * _strstr - finds the first ocurrence of a substring in a string
 * @haystack: pointer to string to be searched
 * @needle: substring to be found in haystack
 * Return: pointer to beginning of the located substring, or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
int s = 0;
char *t = 0;
if (*needle == '\0')
{
return (haystack);
}
for (; *haystack != '\0'; haystack++)
{
if (*haystack == needle[s])
{
if (!s)
{
t = haystack;
}
if (needle[s + 1] == '\0')
{
return (t);
}
s++;
}
else
{
t = 0;
s = 0;
}
}
return (0);
}
