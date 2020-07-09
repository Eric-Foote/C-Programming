// Write a program to print the count of even numbers between 1 - 200. Also print their sum.


#include <stdio.h>

int main() 
{
	int sum = 0, counter = 0;
	for (int i = 1; i < 200; i++) 
	{
		if(i%2 == 0){
			counter++;
			sum += i;
		}
			
	}
	printf("The number of even numbers between 1 and 200 is %d", counter);
	printf("\nThe sum of the even numbers between 1 and 200 is %d", sum);
	return 0;
}
