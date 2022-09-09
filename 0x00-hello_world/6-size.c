#include <stdio.h>

int main() {
	char charTypee;
	int intType;
	long int longintType;
	long long int longlongintType;
	float floatType;
/* sizeof evaluates the size of types on this computer*/
	printf("size of a char: %zu bytes\n", sizeof(charType));
	printf("size of an int: %zu bytes\n", sizeof(intType));
	printf("size of a long int: %zu bytes\n", sizeof(longintType));
	printf("size of a long long int: %zu bytes\n", sizeof(longlongintType));
	printf("size of a floa: %zu bytes\n", sizeof(floatType));

	return (0);
}
