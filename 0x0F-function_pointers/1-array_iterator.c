#include <stdio.h>
/**
 *array_iterator - function that executes a function as a parameter
 *@array: array of elements
 *@size:size of array
 *@action:pointer to function
 *Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int c;
if (array && size > 0 && action)
{
for (c = 0; c < size; c++)
{
action(array[c]);
}
}
}
