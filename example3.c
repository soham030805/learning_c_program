#include<stdio.h>

int main(){
	int age;
	printf("enter the age");
	scanf("%d",&age);
	
	printf("Eligible for vote? %d", age>=18);
	
	return 0;
}
