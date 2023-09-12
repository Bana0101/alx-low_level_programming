#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - a function determine the lenght of a string
 * @str: the string
 * Return: lenght
 */

int _strlen(char *str)
{
	int lenght = 0;

	while (*str++)
		lenght++;
	return (lenght);
}

/**
 * *_strcpy - a function that make copy of a string
 * @det: the copy string
 * @src: the string that copied
 * Return: det
 */

char *_strcpy(char *det, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		det[i] = src[i];
	det[i] = '\0';
	return (det);
}

/**
 * *new_dog - a function that create a new dog
 * @name: the name of the new dog
 * @age: the age
 * @owner: the owner
 * Return: dog or NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
		return (NULL);
	dog = (dog_t *)malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * _strlen(name) + 1);
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * _strlen(owner) + 1);
	if ((*dog).owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->name = _strcpy(dog->name, name);
	dog->age = age;
	dog->owner = _strcpy(dog->owner, owner);
	return (dog);
}
