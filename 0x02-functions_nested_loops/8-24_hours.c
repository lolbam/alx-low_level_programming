#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59
 * Return: returns 0
 */
void jack_bauer(void)
{
	int p, r;

	for (r = 0; r <= 23; r++)
	{
		for (p = 0; p <= 59; p++)
		{
			_putchar(r / 10 + '0');
			_putchar(r % 10 + '0');
			_putchar(':');
			_putchar(p / 10 + '0');
			_putchar(p % 10 + '0');
			_putchar('\n');
		}
	}
}
