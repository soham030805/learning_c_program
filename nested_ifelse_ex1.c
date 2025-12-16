#include<stdio.h>

int main(){
  
  int ticket,idProof,luggage;
  
  printf("Do you have ticket ? (1 = yes ,0 = No)");
  scanf("%d",&ticket);
  
  if(ticket==1){
    printf("Do you have Id Proof ? (1 = yes ,0 = No)");
    scanf("%d",&idProof);
    if(idProof==1){
      printf("Is Luggauge within 20 kg ? (1 = yes ,0 = No)");
      scanf("%d",&luggage);
      if(luggage==1){
        printf("Check is Succesfull");
      }
      else{
        printf("Extra Luggage Charges apply");
      }
    }
    else{
      printf("Id Proof Required");
    }
  }
  else{
    printf("No ticket,No entry");
  }
  

  return 0;
}
