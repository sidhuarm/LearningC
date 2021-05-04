// This program demonstrate recusion
// Recursion means function which calls itself.
// Eg: Factorial with this algorithm
// Author: Arman Sidhu
#include <stdio.h>
int factorial(int x);           // function prototype
int main(){
int a = 5;
printf("The factorial of %d is %d",a,factorial(a));

    return 0;
}
int factorial(int x){
    if(x == 0 || x == 1){
        return 1;
    }else{
        return x*factorial(x-1);
    }
}