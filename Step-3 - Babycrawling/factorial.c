#include <stdio.h>
int main() {
    int number;
    int factorial = 1;
    printf("Enter the number you want factorial of :");
    scanf("%d",&number);

    for(int i = 1 ; i <= number ; i++){
    factorial = factorial * i ;
    } 
    printf("%d! is %d",number ,factorial);
    return 0;
}