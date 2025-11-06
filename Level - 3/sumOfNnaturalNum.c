#include <stdio.h>
int main() {
    int number;
    int sum = 0 ;
    printf("Enter the number you want the sum upto :");
    scanf("%d",&number);

    for(int i = 1 ; i<=number ; i++){
        sum = sum + i ;
       }
       printf("%d",sum);
    return 0;
}