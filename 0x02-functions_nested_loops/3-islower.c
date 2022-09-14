#include <stdio.h>
#include "main.h"
/**
 *_islower - function that checks if lettersare lowercase
 *@c: is the integer that will be used for the argument
 *Return:always 0 (success)
 */
int _islower(int c)
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
