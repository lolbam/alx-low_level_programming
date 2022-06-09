#include "main.h"
/**
 * more_numbers - prints 0-14 10 times
 * Return: returns 0
 */
void more_numbers(void)
{
	int i;
	int p;

	i = 0;
	while (i <= 9)
	{
		for (p = 0; p <= 14; p++)
		{
			if (p >= 10)
			{
				_putchar('0' + (p / 10));
			}
			 _putchar('0' + (p % 10));
		}
		_putchar('\n');
		i++;
	}
}
