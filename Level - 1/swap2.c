// Swap without third variable
#include<stdio.h>
    int main(){
        int a = 10 ;
        int b = 20 ;
        printf("The values of a and b before swapping are :%d %d\n",a , b);

        a = a + b;
        b = a - b;
        a = a - b;

        printf("The values of a and b after swapping are :%d %d",a , b);

        return 0;
    }