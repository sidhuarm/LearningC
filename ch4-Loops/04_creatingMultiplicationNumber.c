//Program to create multiplication table of n number
//value of n will be taken from user
// Author : Arman
#include <stdio.h>
int main(){
    int n;
    printf("Please enter the value of number u want to see the table\n");
    scanf("%d",&n);
    printf("The multiplication table of %d is listed below \n",n);
    for(int i=1;i<=10;i++){
        printf(" %d * %d = %d \n",n,i,n*i);
    }

    return 0;
}