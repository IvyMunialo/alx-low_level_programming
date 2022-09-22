#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcat -  function used to concatenate two strings
 *@dest: is the string to be appended to
 *@src: is the string to append
 *Return:destination
*/
char *_strcat(char *dest, char *src)
{
char destination[] = "dest ";
char source[] = "src!";
strcat(destination, source);
printf("Concatenated String: %s\n", destination);
return (0);
}
