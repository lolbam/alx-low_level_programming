#include <stdio.h>
/**main - This function prints out the string to the standard error
 * and that piece of art is useful" - Dora Korpar, 2015-10-19
 * Return: the function returns 1
 */
int main(void)
{
	fwrite("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59, 1, stderr);
	return (1);
}
