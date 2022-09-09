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
		 * Return: Always 0 (Success)
		 */
	/*To compare if number is positve or negative*/

	if(n>0)
	{
		printf("%d is positive\n", n);
	}
	if(n==0)
	{	
		printf("% is zero\n", n);
	}
	if(n<0)
	{	
		printf("%d is negative\n", n);
	
	}
		return	0;
		}
