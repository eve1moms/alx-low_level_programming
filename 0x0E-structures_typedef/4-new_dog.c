#include"dog.h"
#include<stdlib.h>
/**
* _strlen - returns length of string
* @s: the string
* Return: length of string
*/
int _strlen(char *s)
{
	int p = 0;

	while (s[p] != '\0')
	{
		p++;
	}
	return (p);
}
/**
* *_strcpy - cpoies the string pointed to by src
* @dest: pointer to buffer in which we copy the string
* @src: source string to be copied
* Return: pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	int length = 0, p;

	while (src[length] != '\0')
	{
		length++;
	}
	for (p = 0; p < length; p++)
	{
		dest[p] = src[p];
	}
	dest[p] = '\0';
	return (dest);
}
/**
* new_dog - creats a new dog
* @name: of dog
* @owner: of dog
* @age: of dog
* Return: if success return pointer to new dog else NULL
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int length1 = _strlen(name), length2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (length1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (length2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}
