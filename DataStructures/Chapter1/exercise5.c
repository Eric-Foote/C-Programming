// Write a program to read two floating point numbers. Add these numbers and assign the result to an integer. Finally display the value of all three variables.

#include <stdio.h>

int main () 
{
	float num1, num2;
	int result;

	printf("Give me two floating point numbers");
	scanf("%f%f", &num1, &num2);

	result = (int)num1 + (int)num2;

	printf("%f + %f = %d", num1, num2, result);
	return 0;
}

