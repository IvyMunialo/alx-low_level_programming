#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square int matrix
 * @a: input matrix
 * @size: size of the matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
int s;
int t;
int pos;
int diag1 = 0;
int diag2 = 0;
for (s = 0; s < size; s++)
{
for (t = 0; t < size; t++)
{
pos = (s * size) + t;
if (s == t)
diag1 += a[pos];
if ((s + t) == (size - 1))
diag2 += a[pos];
}
}
printf("%d, %d\n", diag1, diag2);
}
