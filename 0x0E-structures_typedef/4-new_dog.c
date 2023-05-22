#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * *new_dog - create new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return:  pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dg;
	int len1 = strlen(name), len2 = strlen(owner);

	dg = malloc(sizeof(dog_t));
	if (dg == NULL)
		return (NULL);
	dg->name = malloc(sizeof(char) * (len1 + 1));
	if (dg->name == NULL)
	{
		free(dg);
		return (NULL);
	}
	dg->owner = malloc(sizeof(char) * (len2 + 1));
	if (dg->owner == NULL)
	{
		free(dg);
		free(dg->owner);
		return (NULL);
	}
	strcpy(dg->name, name);
	strcpy(dg->owner, owner);
	dg->age = age;
	return (dg);
}
