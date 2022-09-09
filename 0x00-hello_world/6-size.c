#include <stdio.h>

int main(void)
	{
	char charType;
	int intType;
	long int longintType;
	long long int longlongintType;
	float floatType;
/**
 *  sizeof evaluates the size of types on this computer
 * Description:uses sizeof to print size of type
 * Return: 0(success)
 * */
	printf("size of a char: %zu bytes\n", sizeof(charType));
	printf("size of an int: %zu bytes\n", sizeof(intType));
	printf("size of a long int: %zu bytes\n", sizeof(longintType));
	printf("size of a long long int: %zu bytes\n", sizeof(longlongintType));
	printf("size of a float: %zu bytes\n", sizeof(floatType));

	return (0);
	}
