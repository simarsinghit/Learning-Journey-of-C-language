#include <stdio.h>
int main() {
    int number;
    int reversed = 0 ;
    printf("Enter a number you want reverse of :");
    scanf("%d",&number);
    const int original_number = number;
    while (number != 0){
       reversed = reversed * 10 + number % 10 ;
       number = number / 10 ;
    }
    // printf("%d\n",reversed);

    if(original_number == reversed){
        printf("%d is palindrome",reversed);
    }
    else{
        printf("%d is not palindrome",reversed);
    }
    return 0;
}