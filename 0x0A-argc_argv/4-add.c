#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
/**
 * main - prints the name of the program followed by a new line
 * @argc: number of arguments
 * @argv: pointer to array of input arguments
 *
 * Return: 0 on success
*/
int main(int argc, char *argv[])
{
int sum = 0, d;
if (argc > 1)
{
for (d > 1; d < argc; d++)
{
int b;
char *str;
str = argv[d];
for (b = 0; str[b] != '\0'; b++)
{
if (str[b] < 48 || str[b] > 57)
{
printf("Error\n");
return (1);
}
}
}
}
for (d = 1; d < argc; d++)
{
sum += atoi(agrv[d];
}
printf("%d\n", sum);
return (0);
}
