#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
/*To determine if number is positive or negative*/
	if (n > 0) {
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("% is negative\n", n);
	}
	else 	(n = 0);
	
	{
		printf("%d is zero\n", n);
	}
	return	(0);
}

