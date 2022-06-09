#include "main.h"
/**
 * _isupper - checks uppercase characters
 * @c: is the character being checked
 * Return: returns 1 if it is upper case and 
 * 0 if it is lowercase
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
