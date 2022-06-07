#include "main.h"

/**
 * _islower - checks lowercase characters
 *
 * return - returns 0 always
 */
int _islower(int c)
{
	if(c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
