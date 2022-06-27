#include "main.h"
#include <stdlib.h>

/**
* _strdup - returns a pointer to a new string
*           which is a duplicate of the string str
* @str: string to be duplicated
*
* Return: NULL if str = null
*         pointer to duplicate string on success
*         NULL if memory insufficient
*/
char *_strdup(char *str)
{
	char *dup;
	unsigned int i, size = 0;

	if (str == NULL)
		return (NULL);

	while (str[size] != '\0')
	{
		size++;
	}

	dup = malloc(sizeof(char) * (size + 1));

	if (dup == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		dup[i] = str[i];
	}
	dup[i] = '\0';
	return (dup);
}
