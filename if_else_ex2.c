#include<stdio.h>

int main(){
	int age;
	printf("Enter your age: ");
	scanf("%d",&age);
	
	if(age<5){
		printf("Ticket free - Enjoy");
	}
	else if(age>5 && age<12){
		printf("Half ticket");
	}
	else if(age>12 && age<60){
		printf("Full ticket");
	}
	else if(age>60 && age<75){
		printf("senior citizon - Half ticket");
	}
	else if(age>75){
		printf("Free ticket");
	}
}
