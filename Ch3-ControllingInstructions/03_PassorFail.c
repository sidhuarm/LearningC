// Determine student is pass or fail in subjects based on few conditions
// TO pass student needs to score above 33 percent and average 40 percent in all three courses
// Author: Arman.
#include <stdio.h>
int main(){
    
    int physics, maths, chemistry;

    printf("Please Enter marks for Physics! \n");
    scanf("%d",&physics);
    printf("Please Enter marks for maths! \n");
    scanf("%d",&maths);
    printf("Please Enter marks for chemistry! \n");
    scanf("%d",&chemistry);

   float total = (physics+maths+chemistry)/3;
   
    if((total < 40) || (physics<33 || maths<33 || chemistry<33 ) ){
        printf("Sorry u failed in exams \n");
    }else{
         printf("You passed \n");
    }


   return 0; 
}