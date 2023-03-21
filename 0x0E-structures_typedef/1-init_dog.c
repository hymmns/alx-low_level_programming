#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: struct dog - dog struct.
 * @name: char pointer - dog's name
 * @age: float - dog's age.
 * @owner: char pointer - owner' name.
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *p = d;

	p->name = name;
	p->age = age;
	p->owner = owner;
}
