#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * _strlen - returns the length of a string
 * @s: The string to check
 *
 * Return: The length of s
 */
int _strlen(char *s)
{
int i = 0;
while (s[i] != '\0')
i++;
return (i);
}
/**
 * _strcpy - copies the string pointed to by src to the buffer
 *           pointed to by dest, including the terminating null byte
 * @dest: pointer to the buffer where the string is to be copied
 * @src: pointer to the string to be copied
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}
/**
 * new_dog - new_dog
 * @name: pointer to the buffer where the string is to be copied
 * @age: pointer to the string to be copied
 * @owner: input
 * Return: pointer to dest
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
{
return (NULL);
}
new_dog->name = malloc(_strlen(name) + 1);
if (new_dog->name == NULL)
{
free(new_dog);
return (NULL);
}
_strcpy(new_dog->name, name);
new_dog->owner = malloc(_strlen(owner) + 1);
if (new_dog->owner == NULL)
{
free(new_dog->name);
free(new_dog);
return (NULL);
}
_strcpy(new_dog->owner, owner);
new_dog->age = age;
return (new_dog);
}
