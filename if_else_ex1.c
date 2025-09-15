#include<stdio.h>

int main(){
	
	int amount;
	printf("Enter your shopping amount");
	scanf("%d",&amount);
	
	if(amount>499){
		printf("You Unlocked Free Delivery");
	}
	else{
		printf("You have to pay for delivery");
	}
	

}
