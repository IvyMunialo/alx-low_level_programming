#include "3-calc.h"
#include <stdio.h>
#define ops 4

int sum(int a, int b) {return (a+b);}
int sub(int a, int b) {return (a-b);}
int mult(int a, int b) {return (a*b);}
int divi(int a, int b) {return (a/b);}
int mod(int a, int b) { return (a%b);}
int main()
{
int (*ptr2func[ops])(int, int) = {sum, sub, mult, divi, mod};
int choice;
int a, b;
printf("%d", ptr2func[choice] (a, b));
return 0;
}
