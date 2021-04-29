#include <stdio.h>
int main(){
     int year;
     printf("Enter the year u wanna check that is leap or not ? \n");
     scanf("%d",&year);
     if(year%4==0 || year%100!=0){
        printf("The year %d is leap year\n", year); 
     }else{
            printf("The year %d is not a leap year\n", year); 
     }

    return 0;
}