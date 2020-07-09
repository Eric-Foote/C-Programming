// This is an example from the textbook

// Write a program to calculate the average of first n numbers.

#include<stdio.h>

int main()
{
	int n, i = 0, sum = 0;
	float avg = 0.0;
	printf("\nEnter the value of n : ");
	scanf("%d", &n);
	do
	{
		sum = sum + i;
		i = i + 1;
	} while(i <= n);
	avg = (float) sum/n;
	printf("\nThe sum of the first %d numbers = %d", n, sum);
	printf("\nThe average of the first %d numbers = %.2f", n, avg);
	return 0;
}

