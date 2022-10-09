#include <stdlib.h>
#include <stddef.h>
#include "main.h"
/**
 * create_array - creates an array of chars and initializes it
 *@size:is the number of elements in array
 *@c: char
 * Return: pointer
*/
char *create_array(unsigned int size, char c)
{
char *buffer;
unsigned int position;
if (size == 0)
{
return (NULL);
}
buffer = (char *) malloc = (sizeof(c));
if (buffer == 0)
{
return (NULL);
}
else
{
position = 0;
}
while (position < size)
{
*(buffer + position) = c;
position++;
}
return (buffer);
}
