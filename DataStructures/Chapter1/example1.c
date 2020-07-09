// This is an example from the textbook

// Write a program to calculate the circle of a circle

#include <stdio.h>

int main() 
{
	float radius;
	double area;
	printf("\nEnter the radius of the circle: ");
	scanf("%f", &radius);
	area  = 3.14 * radius * radius;
	printf("\nArea = %2f", area);
	return 0;
}

