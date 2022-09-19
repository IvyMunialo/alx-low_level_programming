#include "main.h"
#include <stdio.h>
/**
 *_strlen - returns string length
 *@s: is the string
 * Return: string length as an integer
*/
int _strlen(char *s)
{
int len = 0;
while (*(s + len) != '\0')
len++;
return (len);
}
