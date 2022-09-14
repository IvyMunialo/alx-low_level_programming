#include <stdio.h>
#include "main.h"
/**
 *_isalpha - function that checks for alphabets
 *@c: is the integer that will be used for the argument
 *Return:always 0 (success)
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
