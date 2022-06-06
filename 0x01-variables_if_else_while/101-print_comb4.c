#include <stdio.h>

/**
 *main - print all combinations of three different digits
 *Return: Always 0 (Success)
 */

int main(void)
{
	int u, t, s;

	for (s = '0'; s <= '9'; s++)
	{
		for (t = (s+ 1); t <= '9'; t++)
		{
			for (u = (t + 1); u <= '9'; u++)
			{
				putchar(s);
				putchar(t);
				putchar(u);
				if (s != '7' || t != '8' || u != '9')
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
