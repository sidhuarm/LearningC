// This program create avg for 3 number
// Create a function
// Author : Arman
#include <stdio.h>
float average(int a,int b, int c); // function prototype
int main(){
printf("The average is %f", average(3,6,9) );
    return 0;
}
// creating a function
float average(int a, int b, int c){
return (a+b+c)/3;
}