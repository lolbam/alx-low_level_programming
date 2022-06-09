#include "main.h"
/**
 * print_diagonal - draws a diagonal on the terminal
 * @n: is the length of lines
 * Return: returns 0
 */
void print_diagonal(int n)
{
	int l;
	int p;

	if (n > 0)
	{
		for (l = 0; l < n; l++)
		{
			for (p = 0; p < l; p++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
		_putchar('\n');
	}
}
