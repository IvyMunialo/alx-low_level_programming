#include <stdio.h>
#include "main.h"
/**
*print_alphabet - prints the alphabet
*Return:always 0 (success)
*/
void print_alphabet(void)
{
char alphabet = 'a';
while (alphabet  != 'z'+1)
{
putchar(alphabet);
alphabet++;
}
putchar('\n');
}
