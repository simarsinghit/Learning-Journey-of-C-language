#include <stdio.h>
int main() {
    int number;
    int reverse ;
    printf("Enter a number you want reverse of :");
    scanf("%d",&number);

    while (number != 0){
       reverse = number % 10 ;
       printf("%d",reverse);
       number = number / 10 ;
    }
    return 0;
}