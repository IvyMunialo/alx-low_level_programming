#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initialize a variable of type struct dog
 *@c: array
 *@name: name
 *@age: age
 *@owner: owner
 * Description: This struct is for dog
*/
void init_dog(struct dog *c, char *name, float age, char *owner)
{
if (c == NULL)
return;
else
{
c->name = name;
c->age = age;
c->owner = owner;
}
}
