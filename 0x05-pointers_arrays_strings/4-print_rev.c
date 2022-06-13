#include "main.h"
/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: string to be reversed
 */
void print_rev(char *s)
{
	int j = 0;
	int i;

	while (s[j] != '\0')
	{
		j++;
	}

	for (i = j - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
