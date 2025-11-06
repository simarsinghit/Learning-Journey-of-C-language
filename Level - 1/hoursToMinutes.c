#include<stdio.h>
    int main(){
        float hours ;
        int minutes;

        printf("Enter the hours to convert into minutes:");
        scanf("%f",&hours);

        minutes = hours * 60 ;

        printf("There are %d minutes in %g hours",minutes , hours);

        return 0;
    }