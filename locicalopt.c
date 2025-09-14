#include<stdio.h>

int main(){

	int x,y,z;
	
	printf("Enter X value: ");
	scanf("%d",&x);
	printf("Enter Y value: ");
	scanf("%d",&y);
	printf("Enter Z value: ");
	scanf("%d",&z);
	
	printf("\nLogical Operation Result:- ");
	printf("\nAND result : %d\n ",(x>5 && y<10 && z>50)); //and locical opt result
	printf("\nOR result : %d\n" ,(x>5 || y<10  || z>50)); //or locical opt result
	printf("\nNOT result : %d\n" ,!(x > y > z)); //not locical opt result
	
	return 0;
}
