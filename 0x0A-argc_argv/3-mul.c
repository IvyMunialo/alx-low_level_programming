#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the name of the program followed by a new line
 * @argc: number of arguments
 * @argv: pointer to array of input arguments
 *
 * Return: 0 if true, 1 if false
*/
int main(int argc, char *argv[])
{
if (argc != 3)
{
printf("Error\n");
return (1);
}
else
{
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
}
return (0);
}
