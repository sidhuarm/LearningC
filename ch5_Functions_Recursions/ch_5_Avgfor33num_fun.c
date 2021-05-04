// This program create avg for 3 number
// Create a function
// Author : Arman
#include <stdio.h>
int average(int a,int b, int c);
int main(){
printf("The average is %d", average(3,6,9) );
    return 0;
}
// creating a function
int average(int a, int b, int c){
return (a+b+c)/3;
}