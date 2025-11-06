#include<stdio.h>
    int main(){

        int years , months , weeks , days;
        int remaining_days , remaining_weeks , remaining_months , remaining;
        printf("Enter the number of days :");
        scanf("%d",&days);

        years = days / 365 ;  //calculates the years 

        remaining_days= days % 365 ; //calculates the remaining days after years
        
        months = remaining_days / 30 ; //calculates months
        
        remaining_weeks = remaining_days % 30; //calculates remaining days after months
        
        weeks = remaining_weeks / 7; //calculates weeks

        remaining = remaining_weeks % 7 ; //calculates remaining days


        printf("There are %d years, %d months, %d weeks and %d days in %d days", years  , months , weeks ,remaining ,days);

        return 0;
    }