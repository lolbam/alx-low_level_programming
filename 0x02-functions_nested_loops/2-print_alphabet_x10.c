#include "main.h"
/**
 * print_alphabet_x10 - prints alphabets 10 times
 *
 * Return - always returns 0
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char c;

	while (i <= 9)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}

		i++;
		_putchar('\n');
	}

}
