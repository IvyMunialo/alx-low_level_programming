#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 * reset_to_98 - updates value it points to
 * Return: Always 0.
*/
void reset_to_98(int *n)
{
int n;
n = 402;
printf("value of 'n' : %d\n", n);
reset_to_98(&n);
printf("value of 'n' : %d\n", n);
return (0);
}
