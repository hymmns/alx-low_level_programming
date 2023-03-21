#include <stdlib.h>
#include <string.h>
#include "dog.h"

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

		p->name = strcpy(p->name, name);
		p->owner = strcpy(p->owner, owner);
		p->age = age;

		return (p);
	}
	return (NULL);
}
