// The programe will determine tax depending upon the salary
// Author: Arman
#include <stdio.h>
int main(){
    float tax;
    float salary;
    printf("Enter your salary \n");
    scanf("%f",&salary);
    if(salary< 250000){
      printf("Your total tax is %f and your net salary will be %fd", tax,salary);  
    }
     if(salary>=250000 && salary <=500000){
         tax = 5.0/100 * salary;
         salary = salary - tax;
      printf("Your total tax is %f and your net salary will be %f", tax,salary);  
    }
    if(salary>=500000 && salary <=1000000){
         tax = 20.0/100 * salary;
         salary = salary - tax;
      printf("Your total tax is %f and your net salary will be %f", tax,salary);  
    }
if(salary>1000000){
         tax = 30.0/100 * salary;
         salary = salary - tax;
      printf("Your total tax is %f and your net salary will be %f", tax,salary);  
    }




    return 0;
}