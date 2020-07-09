// This is an example from the textbook

// Write a program to convert an integer into the corresponding floating point number

#include <stdio.h>

int main() 
{
	float f_num;
	int i_num;
	printf("\nEnter any integer: ");
	scanf("%d", &i_num);
	f_num = (float)i_num;
	printf("\nThe floating point variant of %d is = %f", i_num, f_num);
	return 0;
}

