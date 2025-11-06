//Copied Program due to lack of understanding and complexity of how digits are being multiplied again and again
#include <stdio.h>

int main() {
    int number;
    int counter = 0;
    int power = 1;
    int armstrong = 0;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    int original_number = number;
    
    while (number != 0) {
        number = number / 10;
        counter++;
    }
    
    number = original_number;
    
    while (number != 0) {
        int digit = number % 10;
        
        power = 1;  
        for (int i = 0; i < counter; i++) { 
            power = power * digit; 
        }
        
        armstrong = armstrong + power;
        number = number / 10;
    }
    
    if (armstrong == original_number) {
        printf("%d is an armstrong number\n", armstrong);
    } else {
        printf("%d is not an armstrong number\n", armstrong);
    }
    
    return 0;
}