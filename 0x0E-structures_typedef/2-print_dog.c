#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - Prints all the data of a dog
 * @d: A dog strututre
 *
 * Return: Nothing
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name) ? d->name : "(nil)");
		printf("Name: %s\n", (d->name) ? d->name : "(nil)");
		printf("Owner: %s\n", (d->owner) ? d->owner : "(nil)");
	}
}
