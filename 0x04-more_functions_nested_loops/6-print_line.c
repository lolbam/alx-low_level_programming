#include "main.h"
/**
 * print_line - draws a straight line on the terminal
 * @l: is the length of lines
 * Return: returns 0
 */
void print_line(int n)
{
	int l;

	if (n > 0)
	{
		for (l = 0; l < n; l++)
			_putchar('_');
	}
	else
		_putchar('\n');
	_putchar('\n');
}
