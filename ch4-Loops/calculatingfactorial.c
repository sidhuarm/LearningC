//Program to calculate the factorial of number take from a user
// Author : Arman
#include <stdio.h>
int main(){
  int num,i;
  printf("Enter the number for which you want to calculate factorial \n");
  scanf("%d",&num);
  i=num-1;
  while(i!=0){
      num *= i;
       i--;
    }
   printf("The factorial is  %d \n",num );

    return 0;
}