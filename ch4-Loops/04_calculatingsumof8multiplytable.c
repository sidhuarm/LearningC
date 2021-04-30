//Program to find sum of multiplication number of 8
// Author : Arman
#include <stdio.h>
int main(){
int sum = 0;
    for(int i = 1;i<=10;i++){
        printf("The sum is %d \n", sum);
        sum += i*8; 
    }
printf("The sum is %d \n", sum);
    return 0;
}