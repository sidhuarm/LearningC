// Program to display first n natural number in reverse order.
//Author : Arman Sidhu
#include <stdio.h>
int main(){
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    for(int i=n;i;i--){
       printf(" Natural numbers in reverse order are %d\n",i);
    
    }

    return 0;
}