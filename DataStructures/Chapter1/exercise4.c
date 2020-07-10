// Write a program to read the address of a user. Display the result by breaking it into multiple lines


#include <stdio.h>

int main()
{	
	int i;
	printf("Give me an integer");
	scanf("%d",&i);
	int *a = &i;
	printf("%d is the address of what you gave me", &a);
	return 0;
}

