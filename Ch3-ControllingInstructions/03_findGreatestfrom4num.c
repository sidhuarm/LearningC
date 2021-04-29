// Enter 4 numbers and progrom will determine the greatest number
// author: Arman

#include <stdio.h>
int main(){
    int n1,n2,n3,n4;
    printf("Enter 1st number \n");
    scanf("%d",&n1);
    printf("Enter 2nd number  \n");
    scanf("%d",&n2);
    printf("Enter 3rd number  \n");
    scanf("%d",&n3);
    printf("Enter 4th number  \n");
    scanf("%d",&n4);

    if(n1>n2 && n1>n3 && n1>n4){
        printf("The number %d is greater than others  \n",n1);
    }else if(n2>n1 && n2>n3 && n2>n4){
        printf("The number %d is greater than others  \n",n2);
    }else if(n3>n1 && n3>n2 && n3>n4){
        printf("The number %d is greater than others  \n",n3);
    }else{
         printf("The number %d is greater than others  \n",n4);
    }
    return 0;
}