#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/** main- Entry point
 * Description:This program assigns a random number to a variable each time it is executed
 * Returns:Always 0 (success/correct
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if(n>0)
{
printf("%i is positive\n", n);
}
else(n==0)
{
printf("%i is zero\n", n);
}
else(n<0)
{
printf("%i is negative\n", n);
}
  return (0);
}
