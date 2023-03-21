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

	char *formatN = d->name == NULL ? "(nil)" : d->name;
	float formatA = !d->age ? 0.0 : d->age;
	char *formatO = d->owner == NULL ? "(nil)" : d->owner;

	printf("Name: %s\nAge: %f\nOwner: %s\n", formatN, formatA, formatO);
}
