#include<stdio.h>

int main(){
	
	int temperature;
	printf("Enter your temperature");
	scanf("%d",&temperature);
	
	if(temperature>25){
		printf("Hot");
	}
	else if(temperature<25 && temperature>10){
		printf("Moderate");
	}
	else if(temperature<10 && temperature>0){
		printf("Cold");
	}
	else{
		printf("Very Cold");
	}
	
	return 0;
}
