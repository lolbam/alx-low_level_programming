#include "main.h"
#include <stdlib.h>

/**
* str_concat - concatenates two strings
* @s1: string concatenated with
* @s2: string to add to s1
*
* Return: returns pointer to concatenated s1 and s2
*/
char *str_concat(char *s1, char *s2)
{
	char *concat;
	unsigned int i = 0, j = 0, sizes1 = 0, sizes2 = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[sizes1] != '\0')
		sizes1++;

	while (s2[sizes2] != '\0')
		sizes2++;

	concat = malloc(sizeof(char) * (sizes1 + sizes2 + 1));

	if (concat == NULL)
		return (NULL);

	while (i < sizes1)
	{
		concat[i] = s1[i];
		i++;
	}
	while (j < sizes2)
	{
		concat[i] = s2[j];
		i++;
		j++;
	}
	concat[i] = '\0';
	return (concat);
}
