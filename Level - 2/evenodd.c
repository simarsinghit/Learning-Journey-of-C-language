#include<stdio.h>
    int main(){

        int number;

        printf ("Enter a number :");
        scanf("%d",&number);
        
        if (scanf("%d", &number) != 1) {
        printf("Invalid input! Please enter a number.\n");
         return 1;
        }
        else if(number % 2 == 0){
            printf("The number provided is an even number");
        }
        else if(number > 0 && number % 2 != 0){
            printf("The number provided is an odd number");
        }
        else {
            printf("Invalid Input");
        }
        return 0;
    }