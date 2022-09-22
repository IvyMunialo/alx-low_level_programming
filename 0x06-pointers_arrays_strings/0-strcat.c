#include "main.h"
#include <stdio.h>
/**
 * _strcat -  function used to concatenate two strings
 *@dest: is the string to be appended to
 *@src: is the string to append
 *Return:destination
*/
char *_strcat(char *dest, char *src)
{
{
 char dest;
 char src;
 strcat(dest,src);
 printf("Concatenated String: %s\n", dest);
 return (0);
}
