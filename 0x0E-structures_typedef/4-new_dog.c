#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: the owner of the dog
 * Return: pointer to the new dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *new_doggie = malloc(sizeof(struct dog*));

	if (new_doggie == NULL)
	{
		return (NULL);
	}

	new_doggie->name = name;
	new_doggie->age = age;
	new_doggie->owner = owner;

	return (new_doggie);
}