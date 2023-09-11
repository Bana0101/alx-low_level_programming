#include "dog.h"
#include <stdio.h>

/**
 * print_dog - a function that prints a struct dog
 * @d: the dog
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("name: %s\n", d->name ? d->name : "(nil)");
		printf("age: %s\n", d->age ? d->age : "(nil)");
		printf("owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
