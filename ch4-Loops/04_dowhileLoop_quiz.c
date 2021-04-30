// Program to print first n natural numbers using do while,
// 
// Author: Arman
#include <stdio.h>
int main(){
    int count=0,n;
    printf("Enter the value of n \n");
    scanf("%d",&n);

    do {
        printf("%d \n",count);
        count++;
    }while(count<n);

    return 0;
}