#include<stdio.h>
    int main(){
        int a ;
        int b ;
        int c ;
        printf("Enter the number for a :");
        scanf("%d",&a);

        printf("Enter the number for b :");
        scanf("%d",&b);

        printf("Enter the number for c :");
        scanf("%d",&c);

        if (a > b && a> c ){
            printf("%d that is a is greater among all",a);
        }
        else if(b > a && b > c){
            printf("%d that is b is greater among all",b);
        }
        else{
            printf("%d that is c is greater among all",c);
        }
        return 0;
    }