#include "main.h"
#include <stdio.h>
/**
 * main - prints the name of the program followed by a new line
 * @argc: number of arguments
 * @argv: pointer to array of input arguments
 *
 * Return: 0 on success
*/
int main(int argc, char *argv[])
{
int i = 0;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
