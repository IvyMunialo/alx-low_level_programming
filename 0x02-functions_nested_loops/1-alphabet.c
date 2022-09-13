#include "main.h"
/**
*print_alphabet - prints the alphabet
*Return:always 0 (success)
*/
void print_alphabet(void)
{
char alphabet = 'a';
while (alphabet  != 'z')
{
putchar(alphabet);
alphabet++;
}
putchar('\n');
}
