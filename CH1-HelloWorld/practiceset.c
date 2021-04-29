#include<stdio.h>
/*
Author: Arman
prgram To Calculate area of rectangle:-
a. user inputs
*/
int main(){
    int length,breadth;
    printf("Enter the length of rectangle. \n");
    scanf("%d",&length);
    printf("Enter the breadth of rectangle. \n");
    scanf("%d",&breadth);
   
    printf("The area of rectangle is %d.\n",length*breadth);
   
    return 0;
}