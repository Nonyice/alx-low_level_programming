#include <stdio.h>

int main() {
	int intType;
	float floatType;
	double doubleType;
	char charType;
/* sizeof evaluates the size of types on this computer*/
	printf("size of int: %zu bytes \n", sizeof(intType));
	printf("size of float: %zu bytes \n", sizeof(intType));
	printf("size of double: %zu bytes \n", sizeof(doubleType));
	printf("size of char: %zu bytes \n", sizeof(charType));

	return (0)
}
