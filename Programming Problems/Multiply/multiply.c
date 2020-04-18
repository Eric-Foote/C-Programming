#include<stdio.h>
int multiply(int a, int b)
{
  return a * b;
}
void main()
{
int a = 5;
int b = 6;
int c = multiply(a,b);
printf("The values are %d x %d = %d",a,b,c);
printf("\n");
}
