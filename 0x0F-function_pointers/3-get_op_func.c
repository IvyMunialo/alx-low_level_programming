#include "3-calc.h"
/**
 * get_op_func - function that selects correct function to use
 * @s: operator used
 * return: correct function result or NULL if operator is wrong
*/
int (*get_op_func(char *s))(int, int)
{
ops_t ops[] = {
{"+", op_add};
{"-", op_sub};
{"*", op_mut};
{"/", op_div};
{"%", op_mod};
{NULL, NULL}
};
int i;
i = 0;
while (i< 5)
{
if (s[0] == ops[i].op[0])
{
return (ops[i].f);
}
i++;
}
return (NULL);
}

