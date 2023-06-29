#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - structure for dog
 * @name: name of the dog, string
 * @age: age of the dog, float
 * @owner: name of the owner, string
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct d *d, typedef struct dog dog_t);
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
