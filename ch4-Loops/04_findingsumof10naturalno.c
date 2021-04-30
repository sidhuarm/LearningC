//Program to find sum of first 10 natural numbers
// Author : Arman
#include <stdio.h>
int main(){
int sum = 0,count = 1;
while(count != 11){
sum += count;
count++;
}
printf("The sum of 1st 10 natural number is  %d .\n", sum);
    return 0;
}