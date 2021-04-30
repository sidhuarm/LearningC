//Program to check whethter number is prime or not
// Author : Arman
#include <stdio.h>
int main(){
  int num;
  int prime=1;
  printf("Enter the number which want to check \n");
  scanf("%d",&num);
  
  for(int i=2;i<num;i++){
      if(num%i==0){
          prime = 0;
          break;
    }
   }
   if(prime == 0 && num!=2){
           printf("The number is not a prime number.\n");
   }else{
         printf("The number is a prime number.\n");
   }
    return 0;
}