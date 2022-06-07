#include "main.h"
/**
 * main - prints alphabets in lowercase followed by a new line
 *
 * Return- always returns 0
 */

void print_alphabet(void)
{
	char p = 'a';

	while (p <= 'z')
	{
		_putchar(p);
		p++;
	}
	_putchar('\n');

}
