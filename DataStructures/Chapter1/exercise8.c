// Write a program to calculate salary of an employee given their base pay (to be entered by the user),
// HRA = 10% of base pay, TA = 5% of base pay,
// Define HRA and TA as constants and use them to calculate the salary of the employee

#include <stdio.h>

int main () 
{
	const float HRA = 0.10; // 10%
	const float TA = 0.05; // 5%
	
	float salary;
	
	printf("Give me the employee's salary");
	scanf("%f", &salary);

	float employeesSalary = salary*HRA + salary + salary*TA;

	printf("The employees base salary is %f and when we apply HRA = %f and TA = %f we get a salary of %f", salary, HRA, TA, employeesSalary);
	
	return 0;
}

