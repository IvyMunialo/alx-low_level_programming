#include "3-calc.h"
/**
 * op_add - returns sum of 2 numbers
 * @a: integer
 * @b: integer
 * retturn: sum
 */
int op_add(int a, int b)
{
return a + b;
}

/**
 * op_sub - subtracts 2 numbers
 * @a: integer
 * @b: integer
 * returns: difference
 */
int op_sub(int a, int b)
{
return a - b;
}

/**
 * ops_mult - multiplies 2 numbers
 * @a: integer
 * @b: integer
 * return: prodeuct
 */
int op_mult(int a, int b)
{
return a * b;
}

/**
 * ops_divi - divides 2 numbers
 * @a; integer
 * @b; integer
 * returns; quotient
 */
int op_divi(int a, int b)
{
if (b == 0)
{
return ("Error\n");
exit (100);
}
return a / b;
}

/**
 * ops_mod - returns the remainder of division
 * @a: integer
 * @b: integer
 * return: remainder
 */
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit (100);
}
return a % B;
}
