#include "main.h"
#include <stdio.h>
/**
 *print_array -  prints n elements of an array of integers
 *@a: is the array
 *@n: is the number ofelements
 *Description: prints a string
 *on success: return no error
*/
void print_array(int *a, int n)
{
int inc;
for (inc = 0; inc < n; inc++)
if (inc != n - 1)
{
printf("%d, ", a[inc]);
}
else
{
printf("%d", a[inc]);
}
putchar(10);
}
