// This is an example from the textbook

// Write a program to find whether a number is even or odd


#include <stdio.h>

int main()
{
	int a;
	printf("\nEnter the value of a: ");
	scanf("%d", &a);
	if(a%2 == 0)
		printf("\n %d is even", a);
	else
		printf("\n %d is odd", a);
	return 0;
}
