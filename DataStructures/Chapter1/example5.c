// This is an example from the textbook

// Write a program to calculate the sum of numbers from m to n

#include <stdio.h>

int main() 
{
	int n, m, i, sum = 0;
	printf("\nEnter the value of m : ");
	scanf("%d", &m);
	i = m;
	printf("\nEnter the value of n : ");
	scanf("%d", &n);
	while( i <= n)
	{
		sum = sum + i;
		i = i + 1;
	}
	printf("\nThe sum of numbers from %d to %d = %d", m, n, sum);
	return 0;
}
