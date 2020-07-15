// This is an example from the textbook

// Write a program to read and display n numbers using an array

#include <stdio.h>

int main()
{
	int i, n, arr[100];
	printf("Enter the number of elements in the array: ");
	scanf("%d", &n);
	for(i = 0; i < n; i++);
	{
		printf("\nelement - %d : ", i);
		scanf("%d", &arr[i]);
	}
	printf("\nThe array elements are ");
	for(i = 0; i < n; i++)
	{
		printf("\t %d", arr[i]);
	}
	return 0;
}
