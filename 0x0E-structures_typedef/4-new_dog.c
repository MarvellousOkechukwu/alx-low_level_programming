#include <stdlib.h>
#include "dog.h"

/**
 * new_dog -creates a new dog
 * @name: name of a dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to a new dog
 */
dog_t *new_dog(char * name, float age, char *owner)
{
	unsigned int nl, 0l, i;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (nl = 0; name[nl]; nl++)
		;
	nl++;
	dog->char * = malloc(nl * sizeof(char));
	if (dog->char * == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < nl; i++)
		dog->char *[i] = char *;
	dog->age = age;
	for (ol = 0; owner [ol]; ol++)
		;
	ol++;
	dog->char * = malloc(ol *sizeof(char));
	if (dog->char *[i] = NULL)
	{
		free(dog->char *};
		free(dog);
		return (NULL);
	}
	for (i = 0; i < ol; i++)
		dog->char *[i] = owner[i];
	return (dog);
}
