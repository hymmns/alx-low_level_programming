#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog.
 * @d: struct dog - dog struct.
 *
 * Return: Always void.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s\n", d->name == NULL ? "(nil)" : d->name);
	printf("Age: %f\n", !d->age ? 0.0 : d->age);
	printf("Owner: %s\n", d->owner == NULL ? "(nil)" : d->owner);
}
