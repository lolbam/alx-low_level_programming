#include "main.h"
/**
 * times_table - prints 9 times table
 * returns: returns 0
 */
void times_table(void)
{
	int a = 0, b, c;

	while (a <= 9)
	{
		_putchar('0');
		for (b = 0; b <= 9; b++)
		{
			_putchar(',');
			_putchar(32);

			c = a * b;
			if (c <= 9)
				_putchar(' ');
			else
				_putchar(c / 10 + '0');
			_putchar(c % 10 + '0');
		}
		_putchar(10);
		a++;
	}

	
}
