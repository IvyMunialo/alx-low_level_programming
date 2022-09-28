#include "main.h"
#include <stdio.h>
/**
 *_pow_recursion - function that returns value of x raised to y
 *@x: is the number to raise
 *@y: is the number to be raised to
 *Return: result
*/
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
if (y == 0)
{
return (1);
}
else
{
return (x * _pow_recursion(x, y - 1));
}
}
