#include "main.h"
/**
 * swap_int - interchanges integers
 *@a: integer one
 *@b: integertwo
 * Return: Always 0.
*/
void swap_int(int *a, int *b)
{
int tmp = *a;
*a = *b;
*b = tmp;
}
