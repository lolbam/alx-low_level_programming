#include "main.h"

/**
 * _islower - checks lowercase characters
 * @c - is the character to be checked
 * Return - returns 0 when it is uppercase or 1 when it is lowecase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
