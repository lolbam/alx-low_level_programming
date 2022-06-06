#include <stdio.h>

/**
 *main - prints possible combinations of two digits
 *Return: Always 0 (Success)
 */

int main(void)
{
        int p;
        int q;
	int r;

        for (q = '0'; q <= '9'; q++)
        {
                for (p= (q + 1); p <= '9'; p++)
                {
			for (r = (p + 2); r <= '9'; p++)
			{
                        	putchar(q);
                        	putchar(p);
				putchar(r);
                        	if (q!= '7' || p != '8' || r != '9')
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
