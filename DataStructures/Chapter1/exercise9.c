// Write a program to prepart a grocery bill. Enter the name of the items purchased, quantity in which it is purchased, and its price per unit. Then display the bill in the following format
// ***************************** BILL ***************************
// 	Item		Quantity	Price		Amount	
// 	---------------------------------------------------------
// 	---------------------------------------------------------
// 		Total Amount to be paid
// 	--------------------------------------------------------

#include<stdio.h>

int main() 
{
	char* item [500];
	int quantity;
	float price;
	int amount;
	printf("***************************** BILL ****************************");
	printf("\nItem \t\t Quantity \t\t Price \t\t Amount");
	printf("\n---------------------------------------------------------------");
	printf("\n---------------------------------------------------------------");
	scanf("%s", item);
	scanf("%d", &quantity);
	scanf("%f", &price);
	scanf("%d", &amount);
	
	return 0;
}
