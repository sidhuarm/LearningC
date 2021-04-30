// Intro to Loop instructions
// author Arman
#include <stdio.h>
int main(){
    int a = 6;
    while(a>5){
    printf("%d \n",a);
     if(a==10){
         
         printf("The value became 10 and we are breaking the infinite loop");
         break;
     }
     a++;
    }
    return 0;
}