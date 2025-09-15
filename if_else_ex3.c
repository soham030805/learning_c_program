#include<stdio.h>

int main(){
	int temperature;
	printf("Enter Temperature:  ");
	scanf("%d",&temperature);
	
	if(temperature>40 && temperature<50);
	printf("Very Hot temperature");
	scanf("%d",&temperature);
	
	if(temperature>30 && temperature<40);
	printf("Hot temperature");
	scanf("%d",&temperature);
	
	if(temperature>20 && temperature<30);
	printf("Modrate temperature");
	scanf("%d",&temperature);
	
	if(temperature>10 && temperature<20);
	printf("Cold temperature");
	scanf("%d",&temperature);
	
	if(temperature>0 && temperature<10);
	printf("Very Cold temperature");
	scanf("%d",&temperature);
}
