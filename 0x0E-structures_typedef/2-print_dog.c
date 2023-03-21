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

	struct dog *p = d;

	char *formatN = p->name == NULL ? "(nil)" : p->name;
	float formatA = !p->age ? 0.0 : p->age;
	char *formatO = p->owner == NULL ? "(nil)" : p->owner;

	printf("Name: %s\nAge: %f\nOwner: %s\n", formatN, formatA, formatO);
}
