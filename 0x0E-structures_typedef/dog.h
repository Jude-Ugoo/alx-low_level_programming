#ifndef HEADER_FILE
#define HEADER_FILE

/**
 * struct dog - Create the structure dog
 *
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: Create the structure dog
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
