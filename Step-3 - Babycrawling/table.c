#include <stdio.h>
int main() {
    int table;
    int product;
    printf("Enter the number you want the table of upto 20 :");
    scanf("%d",&table);

    for(int i = 1 ; i <= 20 ; i++ ){
        product = table * i;
        printf("%d x %d = %d\n",table , i,product);
    }
    return 0;
}