// Write a program to read 10 integers. Display these numbers by printing three numbers in a line seperated by commas.

#include<stdio.h>

int main()
{
	int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10;
	printf("Give me 10 integers: ");
	scanf("%d%d%d%d%d%d%d%d%d%d", &num1, &num2, &num3, &num4, &num5, &num6, &num7, &num8, &num9, &num10);
	printf("%d, %d, %d \n%d, %d, %d \n%d, %d, %d \n%d", num1, num2, num3, num4, num5, num6, num7, num8, num9, num10);
	return 0;
}
