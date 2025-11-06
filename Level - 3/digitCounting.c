#include <stdio.h>
int main() {
    int number;
    int counter = 0;
    printf("Enter a number:");
    scanf("%d",&number);

    while (number != 0){
        number = number / 10 ;
        counter++ ;
    }
        printf("%d",counter);
    return 0;
}