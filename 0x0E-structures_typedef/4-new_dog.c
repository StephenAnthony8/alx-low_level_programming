#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new struct
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: new struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *struct_arr;
	char *nm, *own;
	int count, i, j;

	j = i = 0;
	struct_arr = malloc(sizeof(dog_t));
	if (!struct_arr)
	{
		free(struct_arr);
		return (0);
	}
	while (name[i] != '\0')
		i++;
	nm = malloc(sizeof(char) * (i + 1));
	if (!nm)
	{
		free(nm);
		free(struct_arr);
		return (0);
	}
	while (owner[j] != '\0')
		j++;
	own = malloc(sizeof(char) * (j + 1));
	if (!own)
	{
		free(nm);
		free(own);
		free(struct_arr);
		return (0);
	}
	for (count = 0; count <= i; count++)
		nm[count] = name[count];
	for (count = 0; count <= j; count++)
		own[count] = owner[count];
	struct_arr->name = nm;
	struct_arr->age = age;
	struct_arr->owner = own;
	return (struct_arr);
}
