#include "dog.h"
#include <stdlib.h>

/**
 * _strcpy - copies a string
 *
 * @s: string to copy
 *
 * Return: pointer to string copy
 */

char *_strcpy(char *s)
{
	int var;
	char *p;

	for (var = 0; s[var]; var++)
		;

	p = malloc(var + 1);

	if (p)
	{
		for (; var >= 0; var--)
			p[var] = s[var];
	}

	return (p);
}

/**
 * new_dog - creates a new dawg
 *
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: dog struct if successful, NULL if else
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;

	p = malloc(sizeof(*p));

	if (p == NULL)
		return (NULL);

	p->name = _strcpy(name);

	if (p->name == NULL)
	{
		free(p);
		return (NULL);
	}

	p->age = age;

	p->owner = _strcpy(owner);

	if (p->owner == NULL)
	{
		free(p->name);
		free(p);
		return (NULL);
	}

	return (p);
}
