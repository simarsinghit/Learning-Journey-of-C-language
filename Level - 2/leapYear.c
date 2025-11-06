#include <stdio.h>
int main() {
    int leapYear;

    printf("Enter a year to check weather it is leap year or not :");
    scanf("%d",&leapYear);

    if((leapYear % 4  == 0 && leapYear % 100 != 0) || leapYear % 400 == 0){
        printf("Given year that is %d is a leap year",leapYear);
    } 
    else{
        printf("Given year that is %d is not a leap year",leapYear);
    }
    return 0;
}