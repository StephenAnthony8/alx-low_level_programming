#include "dog.h"
/**
 * init_dog - Initializes a variable of type struct dog
 * @d: pointer to struct dog
 * @name: string name of dog
 * @age: dog age
 * @owner: owner name
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *ptr;

	ptr = d;
	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;
}
