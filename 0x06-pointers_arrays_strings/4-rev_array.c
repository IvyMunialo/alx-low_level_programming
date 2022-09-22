#include <stdio.h>
#include "main.h"
/**
 *reverse_array - reverses an array
 *@a: is the string to be modified
 *@n: is the number ofelements in the array
 *Return:void
*/
void reverse_array(int *a, int n)
{
int tmp, length;
for (length = n - 1; length > n / 2; length--)
{
tmp = a[n - 1 - length];
a[n - 1 - length] = a[length];
a[length] = tmp;
}
}
