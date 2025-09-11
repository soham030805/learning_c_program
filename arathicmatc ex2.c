#include<stdio.h>

int main(){
	
	int appleQty,oilQty,milkQty;
	int applePrice,oilPrice,milkPrice;
	int total;
	int paid;
	applePrice = 30;
	oilPrice = 50;
	milkPrice = 20;
	
	printf("Enter Quantity of apple(kg)");
	scanf("%d" ,&appleQty);
	printf("Enter Quantity of oil(li)");
	scanf("%d" ,&oilQty);
	printf("Enter Quantity of milk(li)");
	scanf("%d" ,&milkQty);
	
	total = (appleQty * applePrice) + (oilQty * oilPrice) + (oilQty * oilPrice);
	printf("Total bill amount : %d\n",total);
	
	printf("Enter amount paid by Coustemer?");
	scanf("%d",&paid);
	
	printf("Change to return = %d\n", paid - total);
	
	return 0;
}
