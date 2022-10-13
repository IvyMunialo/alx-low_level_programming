#ifndef CALC_H
#define CALC_H
#include <stdio.h>
#include <stdlib.h>
/**
 * struct op - struct op
 * @op: operator
 * @f: function
*/
typedef struct op
{
char op;
int (*f)(int a, int b);
}
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mult(int a, int b);
int op_divi(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);
#endif
