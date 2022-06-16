#include "main.h"

/**
* _strcpy - copies string from src to dest
* @dest: where string will go
* @src: where string is from
*
* Return: returns string
*/
char *_strcat(char *dest, const char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
