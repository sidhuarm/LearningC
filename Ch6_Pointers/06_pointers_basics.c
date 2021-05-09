// This program will illustrate the basics of pointers
// Author: Arman
#include <stdio.h>
int main(){

int i = 5;
int *j = &i;

printf("Value of j is %d \n",*(&j) );  // It will print value it holds i.e address of i
printf("Value of i is %d \n",*(&i) );  // It will print value it holds i.e 5
printf("Value of i through j is %d \n", *(j)); // It will print value of i
// printf("The value of j is %d \n",j);
// printf("The value of j is %d \n", *j);
// printf("The address of j is %u \n",&j);
// printf("The address of j is %u \n",&i);
// printf("The value of j is %d \n",*(&j));

    return 0;
}