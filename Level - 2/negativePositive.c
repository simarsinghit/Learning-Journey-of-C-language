#include<stdio.h>
    int main(){
        int number;

        printf("Enter a number");
        scanf("%d",&number);

        if(number > 0 ){
            printf("The number is a Positive number");
        }
        else if (number == 0 ){
            printf("The number is neither Positive nor negative");
        }
        else{
            printf("The number is Negative number");
        }
        
        return 0;
    }
