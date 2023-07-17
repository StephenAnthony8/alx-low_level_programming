#include "dog.h"
#include <stdlib.h>
/**
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *struct_arr;
	char * nm, *own;
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
	nm = malloc(sizeof(char) * i + 1);
	if (!nm)
	{
		free(nm);
		free(struct_arr);
		return (0);
	}
	while (owner[i] != '\0')
		j++;
	own = malloc(sizeof(char) * j + 1);
	if (!own)
	{
		free(nm);
		free(own);
		free(struct_arr);
		return (0);
	}
	for (count = 0; count <= i; count++)
		struct_arr->nm[count] = name[count];
	for (count = 0; count <= j; count++)
		struct_arr->own[count] = owner[count];
	struct_arr.name = nm;
	struct_arr.age = age;
	struct_arr.owner = own;
	return (struct_arr);
}
