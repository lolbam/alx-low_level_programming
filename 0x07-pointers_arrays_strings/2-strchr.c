#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates character in a string
 * @s: checked string
 * @c: character located
 *
 * Retrun: pointer to the first occurrence of the character c
 *         in the string s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (!c)
		return (s);
	return (NULL);
}
