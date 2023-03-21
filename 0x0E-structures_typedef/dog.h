#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Describe a dog structure.
 * @name: char pointer - Dog's name.
 * @age: float - Dog's age.
 * @owner: char pointer - Dog's owner.
 *
 * Description:  Describe a dog structure containing the
 * dog's name, the age and the owner's name.
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif
