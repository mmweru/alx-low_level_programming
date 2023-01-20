#include "dog.h"
#include <stdio.h>
/**
* print_dog - outputs the dog
* name, age and owner
* @d: points to struct dog
*/
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
		{
			printf("Name: (nil)");
		}
		else
		{
			printf("Name: %s\n", d->name);
		}
		if (d->owner == NULL)
		{
			printf("Owner: (nil)");
		}
		else
		{
			printf("Owner: %s\n", d->owner);
		}
		printf("Age: %f\n", d->age);
	}
}
