#ifndef DOG_H
#define DOG_H
/**
 * struct dog - contains elements of a dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * contains and defines new varibles for the description of a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
