#include<stdio.h>
    int main(){

        float circumference;
        float radius;
        const float pi = 3.14159 ;

        printf("Enter the radius of circle :");
        scanf("%f",&radius);

        circumference = 2 * pi * radius ;

        printf("The circumference of circle is :%f",circumference);

        return 0;
        
    }