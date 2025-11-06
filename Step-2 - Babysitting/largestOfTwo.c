#include<stdio.h>
    int main(){

        int a , b ;

        printf("Enter the value of a and b:");
        scanf("%d %d\n",&a , &b);
        // printf("Enter the value of b :");
        // scanf("%d",&b);

        if (a > b){
            printf("%d is greater that %d",a , b);
        }
        else if (a == b){
            printf("%d and %d both are equal",a , b);
        }
        else{
            printf("%d is greater than %d", b , a );
        }

        return 0 ; 
    }