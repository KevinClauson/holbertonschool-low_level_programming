#ifndef DOG_H
#define DOG_H
typedef struct dog dog;
/**
 * struct dog - dog
 * @name: name of dog.
 * @age: age of dog.
 * @owner: name of owner.
 *
 * Description: use to store dogs.
 */
struct dog
{
	char   *name;
	float  age;
	char   *owner;
};

#endif
