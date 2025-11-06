#include <stdio.h>
int main() {
    int number;
    printf("Enter a number:");
    scanf("%d",&number);

    if (number % 5 == 0 && number % 11 == 0){
        printf("%d is divisible by 5 and 11 both",number);
    }
    else if (number % 5 == 0 && number % 11 != 0){
        printf("%d is divisible by 5 but not 11",number);
    }
    else if (number % 5 != 0 && number % 11 == 0){
        printf("%d is divisible by 11 but not 5",number);
    }
    else {
        printf("%d is not divisible by both 5 and 11",number);
    }
    return 0;
}