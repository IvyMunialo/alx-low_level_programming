#include <stdio.h>
/**
 *main- prints the size of various types on the computer it is compiled on
 *Description:prints zixe of int, char, etc
 *Return:(0)
*/
int main(void)
{
printf("size of an int %lu: byte(s) \n", sizeof(int));
printf("size of a char %lu: byte(s) \n", sizeof(char));
printf("size of a long int %lu: byte(s) \n", sizeof(long int));
printf("size of a long long int %lu:byte(s) \n", sizeof(long long int));
printf("size of a float  %lu: byte(s) \n", sizeof(float));
return (0);
}
