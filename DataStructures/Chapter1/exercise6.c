// Write a program to read a floating point number. Display the rightmost digit of the integral part of the number.

#include <stdio.h>

int main () 
{
	float num1;

	printf("Give me a floating point number");

	scanf("%f", &num1);

	int num = (int)num1;

	num = num % 10;
	
	printf("%d", num);

	return 0;
}
