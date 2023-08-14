#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structure to hold data for a dog
 * @name: char value
 * @age: float value
 * @owner: char value
 *
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
