#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*betty style doc for function main*/
int main(void)
		{
	int	n;
	srand(time(0));
	n= rand() - RAND_MAX/2;
	printf("%d\n", n);
		/**
		 * main - Entry point
		 * Return: (0)
		 */
	/*To compare if number is positve or negative*/

	if(n>0)
	{
		printf("%d is positive");
	}
	else if(n<0)
	
	{
		printf("%d is negative");
	}
	else 
	{	printf("%d is zero");
	}
		return	0;
		}
