#include <stdio.h>
#include <stdlib.h>
/**
 * *main -  multiplies two numbers
 *@argc: number of arguments passed
 *@argv: the vector
 * Return: returns 1 if the program does not 
 * 	recieve two arguments
 */
int main (int argc, char* argv[])
{
	int num1, num2, mult;
	if (argc >= 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		mult = num1 * num2;

		printf("%d\n", mult);
	}
	else
	{
		printf("Error\n");
		return (1);
	}	
	return (0);
}
