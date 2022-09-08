#include <stdio.h>
/**
 *main- prints the size of various types on the computer it is compiled on
 *Description:prints zixe of int, char, etc
 *Return:(0)
*/
int main(void)
{
printf("size of an int is: %lu. \n", sizeof(int));
printf("size of a char is: %lu. \n", sizeof(char));
printf("size of a long int is: %lu. \n", sizeof(long int));
printf("size of a long long int is: %lu. \n", sizeof(long long int));
printf("size of a float is: %lu. \n", sizeof(float));
return (0);
}
