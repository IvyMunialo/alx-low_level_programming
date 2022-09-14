#include <stdio.h>
#include "main.h"
/**
 *int _islower(int c) - checks if lettersare lowercase
 *@c: is the integer that will be used for the argument
 *Return:always 0 (success)
 */
int _islower(int c);
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
