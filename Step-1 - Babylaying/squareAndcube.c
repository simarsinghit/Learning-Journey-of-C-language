// square and cube finding
#include<stdio.h>
    int main(){
        int choice ;
        int number;
        int square;
        int cube;

        printf("Enter a number that you want to find square or cube of : ");
        scanf("%d",&number);
        printf("Enter the choice below:\n 1. Enter 1 for finding Square of number : \n 2. Enter 2 for finding cube of number : \n 3. Enter 3 for finding both square and cube of number : \n");
        scanf("%d",&choice);

        square = number * number;
        cube = number * number * number;
        
        if(choice == 1){
            printf("Square of %d is %d",number ,square);
        }
        else if(choice == 2){
            printf("Cube of %d is %d",number,cube);
        }
        else if(choice == 3 ){
            printf("Square of %d is %d",number ,square);
            printf("\n");
            printf("Cube of %d is %d",number,cube);
        }
        else{
            printf("Invalid option:");
        }
        return 0;
    }