#include <stdio.h>
#include "main.h"
/**
 *_isdigit- function that checks checks for a digit
 *@c: is the integer that will be used for the argument
 *Return:always 0 (success)
*/
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
}
