#include <stdio.h>
int main() {
    float operand_1 , operand_2;
    char operator;
    float result;

    printf("Enter first number:");
    scanf("%f",&operand_1);
    printf("Enter the operation (/ , * , + , -):");
    scanf(" %c",&operator);
    printf("Enter second number:");
    scanf("%f",&operand_2);
    

    if(operator == '/'){
        result = operand_1 / operand_2;
        printf("The results of / operation is:%g",result);
    }
    else if(operator == '*'){
        result = operand_1 * operand_2;
        printf("The results of * operation is:%g",result);
    }
    else if(operator == '+'){
        result = operand_1 + operand_2;
        printf("The results of + operation is:%g",result);
    }
    else if(operator == '-'){
        result = operand_1 - operand_2;
        printf("The results of - operation is:%g",result);
    }
    
    return 0;
}