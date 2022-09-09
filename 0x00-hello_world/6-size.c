#include <stdio.h>
/*program to print size of type*/
int main(void)
	{
	char charType;
	int intType;
	long int longintType;
	long long int longlongintType;
	float floatType;
/**
 * main - 'prints size of type on this computer'
 * Description: using the main function to print sizeof char and types
 * Return: 0 (success)
 */
	printf("Size of a char: %zu byte(s)\n", sizeof(charType));
	printf("Size of an int: %zu byte(s)\n", sizeof(intType));
	printf("Size of a long int: %zu byte(s)\n", sizeof(longintType));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(longlongintType));
	printf("Size of a float: %zu byte(s)\n", sizeof(floatType));

	return (0);
	}
