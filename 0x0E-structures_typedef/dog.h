#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Structure that contains details about a dog
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog owner's name
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

/* Question 1 */
void init_dog(struct dog *d, char *name, float age, char *owner);

/* Question 2 */
void print_dog(struct dog *d);

/* Question 4 */
dog_t *new_dog(char *name, float age, char *owner);

#endif
