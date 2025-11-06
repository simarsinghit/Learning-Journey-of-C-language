// Swap two numbers (use third variable).
#include<stdio.h>
    int main(){
        int a = 10;
        int b = 30;
        int temp;
        printf("The values of a and b before swapping are :%d %d\n",a , b);

        temp = a;
        a = b;
        b = temp;
        printf("The values of a and b after swapping are :%d %d",a , b );

        return 0;
        
    }