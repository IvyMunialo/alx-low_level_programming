#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 * Return: Always 0.
*/
int main(void)
{
int n;
*n = 402;
printf("value of 'n' : %d\n", n);
reset_to_98(&n);
printf("value of 'n' : %p\n", n);
return (0);
}
