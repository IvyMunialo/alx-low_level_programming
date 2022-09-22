#include "main.h"
/**
 * _strcat -  function used to concatenate two strings
 *@dest: is the string to be appended to
 *@src: is the string to append
 * Return: Always 0.
*/
char *_strcat(char *dest, char *src)
{
char destination[] = "dest ";
char source[] = "src!";
printf("Concatenated String: %s\n", strcat(destination, source));
return (0);
}
