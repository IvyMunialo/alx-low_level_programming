#include "main.h"
#include <stdio.h>
/**
 *factorial - function that returns the factorial of a given number
 *@n:is the given number
 *Return: result
*/
int factorial(int n)
{
if (n == 0 || n == 1)
{
return (1);
}
else
{
return n*factorial(n-1);
}
}
