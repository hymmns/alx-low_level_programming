#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog.
 * @name: char pointer - dog's name.
 * @age: float - dog's age.
 * @owner: char pointer - owner's name.
 *
 * Return: dog_t pointer otherwise
 * NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;

	if (name != NULL && owner != NULL)
	{
		p = malloc(sizeof(dog_t));

		if (p == NULL)
			return (NULL);

		p->name = malloc(sizeof(char) * (strlen(name) + 1));
		p->owner = malloc(sizeof(char) * (strlen(owner) + 1));

		if (p->name == NULL || n_dog->owner == NULL)
		{
			free(p->name);
			free(p->owner);
			free(p);
			return (NULL);
		}

		p->name = strcpy(p->name, name);
		p->owner = strcpy(p->owner, owner);
		p->age = age;

		return (p);
	}
	return (NULL);
}
