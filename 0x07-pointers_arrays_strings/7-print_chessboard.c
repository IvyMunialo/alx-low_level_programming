#include "main.h"
/**
 * print_chessboard - function that prints the chessboard.
 * @a: input matrix
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
int q;
int r;
for (q = 0; q < 8; q++)
{
for (r = 0; r < 8; r++)
{
_putchar(a[q][r]);
}
_putchar('\n');
}
}
