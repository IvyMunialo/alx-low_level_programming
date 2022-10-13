#include "3-calc.h"
/**
 * main - checks arguments
 * @argc: arg count
 * @argv: arg vector
 * return: error if number of arg is wrong
*/
int main(int argc, int argv[])
{
int a = 0, b = 0, res = 0;
char s;
if (arg != 4)
{
prinf("Error\n");
exit (98);
}
if (arg[2][1] != '\0')
{
printf("Error\n");
exit (99);
}
if (s != '+' && s != '-' && s != '*' && s != '/' && s != '%')
{
printf("Error\n");
exit (99);
}
a = atoi(argv[1]);
b = atoi(arg[3]);
res = (get_op_func(arg[2]))(a, b);
printf("%d", res);
return (0);
}

