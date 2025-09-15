#include<stdio.h>

int main(){
   int ticket , IDproof, luggage;
   
   printf("Do you have a id ticket? (1 = yes, 0 = no)");
   scanf("%d",&ticket);
   
   if(ticket==1){
   	printf("Do you have a IDproof? (1 = yes, 0 = no)");
   	scanf("%d",&IDproof);
   	if(IDproof == 1){
   		printf("Is Luggage within 20 kg? (1 = yes, 0 = no)");
   		scanf("%d",&luggage);
   		if (luggage==1){
   			printf("Check in succesfully");
		   }
		   else{
		   	printf("Extra luggage charges apply");
		   }
	}else{
		   	printf("ID proof is required");
		   }
	   }else{
	   	printf("no ticket no entry");
	   }
	   return 0;
   }
   

