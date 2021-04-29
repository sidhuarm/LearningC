//This program will determine whether entered character is Lowercase or UpperCase
//Author : Arman
#include <stdio.h>
int main(){
    char character;
    printf("Enter the character you want to determine whether its UpperCase or Lowercase \n");
    scanf("%c",&character);
    if(character>=65 && character<=90){
         printf("The character %c is UpperCase \n",character);
    }else if(character>=97 && character<=122){
         printf("The character %c is LowerCase \n",character);
    }else{
        printf("The character %c is niether LowerCase nor Uppercase \n",character);
    }


    return 0;
}