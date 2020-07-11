// Write a program to calculate simple interest and compound interest

#include<stdio.h>
#include<math.h>


float simpleInterest (float principle, float dailyInterestRate, float numberOfDays);

float compoundInterest (float principle, float nominalAnnualInterestRate, float compoundingFrequency, float time);

int main()
{
	// Now we need some test values
	float principle = 20.00;
	float dailyInterestRate = 0.1;
	float numberOfDays = 5;
	float newPrinciple = principle + simpleInterest(principle,dailyInterestRate,numberOfDays);
	printf("Using simple interest the new principle value is %f", newPrinciple);
	float compoundingFrequency = 0.1;
	newPrinciple = compoundInterest(principle,dailyInterestRate,compoundingFrequency,numberOfDays);
	printf("\nUsing compound interest the new principle value is %f", newPrinciple);
	return 0;
}

float simpleInterest (float principle,float dailyInterestRate, float numberOfDays)
{
	float sI = principle * dailyInterestRate * numberOfDays;
       	return sI;	
}

float compoundInterest (float principle, float nominalAnnualInterestRate, float compoundingFrequency, float time)
{
	float newPrinciple = principle * powf((1 + (nominalAnnualInterestRate / compoundingFrequency)), (compoundingFrequency * time));
	return newPrinciple;
}


