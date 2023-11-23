#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - print a struct dog
 *
 * @d: dawg to print
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s\n", d->name ? d->name : "(nil)");

	if (d->age < 0)
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n", d->age);

	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
