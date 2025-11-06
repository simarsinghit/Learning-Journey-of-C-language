#include <stdio.h>
int main() {

    int number;
    printf("Enter up to what number you want to print the numbers from 1 :");
    scanf("%d",&number);

    for(int i = 1 ; i <=number ; i++){
        printf("%d\n",i);
    }

    return 0;
}