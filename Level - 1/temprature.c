#include<stdio.h>
int main(){
    int choice;
    float temperature;
    float result;

    printf("Enter 1 to convert temperature from celsius to fahrenheit : \nEnter 2 to convert temperature from fahrenheit to celsius : \n");
    scanf("%d",&choice);
    printf("Enter the temperature :");
    scanf("%f",&temperature);

    if(choice == 1){
        result = (temperature * 9.0 / 5.0) + 32;
        printf("Fahrenheit: %.2f", result);
    }
    else if(choice == 2){
        result = (temperature - 32) * 5.0 / 9.0;
        printf("Celsius: %.2f", result);
    }
    else {
        printf("Invalid choice");
    }
    return 0;
}   