#include <stdio.h>
int main() {
    int number;
    printf("Enter a number:");
    scanf("%d",&number);

    if (number >= 1 && number <= 100){
        printf("%d falls within the range from 1 to 100",number);
    }
    else {
        printf("%d doesn't fall within the range of 1 to 100",number);
    }
    return 0;
}