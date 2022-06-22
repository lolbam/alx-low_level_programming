#include "main.h"
/**
 *_print_rev_recursion - prints a character followed by a new line
 *@s: the character
 *
 */
void _print_rev_recursion(char *s)
{

	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
