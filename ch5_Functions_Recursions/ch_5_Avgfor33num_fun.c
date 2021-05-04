// This program create avg for 3 number
// Create a function
// Author : Arman
#include <stdio.h>
float average(int a,int b, int c); // function prototype
int main(){
    int a,b,c;
    printf("Enter the value of a and then press ENTER \n ");
    scanf("%d",&a);    
    printf("Enter the value of b and then press ENTER \n ");
    scanf("%d",&b);
    printf("Enter the value of c and then press ENTER \n ");
    scanf("%d",&c);
printf("The average is %f", average(a,b,c) );
    return 0;
}
// creating a function
float average(int a, int b, int c){
return (float)(a+b+c)/3;
}