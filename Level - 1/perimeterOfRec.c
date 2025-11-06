#include<stdio.h>
    int main(){

        int length , bredth , perimeter;
        printf("Enter the length :");
        scanf("%d",&length);
        printf("\nEnter the bredth :");
        scanf("%d",&bredth);

        perimeter = 2 * (length + bredth);

        printf("The perimeter of Rectangle is :%d",perimeter);

        return 0;
    }