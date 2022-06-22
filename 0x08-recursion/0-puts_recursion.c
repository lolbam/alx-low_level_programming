#include "main.h"
/**
 *_puts_recursion - prints a character followed by a new line
 *@s: the character
 *
 */
void _puts_recursion(char *s)
{
	
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else 
		_putchar('\n');

}
