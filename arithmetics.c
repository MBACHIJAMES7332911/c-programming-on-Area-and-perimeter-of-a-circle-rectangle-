#include <stdio.h>
int main()
{
	int a = 12;
	int b = 3;
	int addition,subtraction,division,modulus;

	addition = a + b;
	subtraction = a - b;
	division = a / b;
	modulus = a % b;
	printf("addition of two numbers a, b is : %d\n",addition);
	printf("subtraction of two numbers a, b : %d\n",subtraction);
	printf("division of two numbers a, b : %d\n",division);
	printf("modulus of two numbers a, b : %d\n",modulus);
	return 0;
}
