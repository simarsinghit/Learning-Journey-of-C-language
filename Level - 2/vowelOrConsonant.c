#include <stdio.h>
int main() {
    char alphabet;

    printf("Enter an alphabet:");
    scanf("%c",&alphabet);

    if(alphabet == 'a' || alphabet == 'e' || alphabet == 'i' || alphabet == 'o' || alphabet == 'u' && alphabet == 'A' || alphabet == 'E' || alphabet == 'I' || alphabet == 'O' || alphabet == 'U'){
        printf("The alphabet is a vowel");
    }
    else if(alphabet == '/' || alphabet == '*' || alphabet == '-' || alphabet == '+' || alphabet == '!' ||alphabet == '@' || alphabet == '#' || alphabet == '$' || alphabet == '%' || alphabet == '&' ||alphabet == '^' || alphabet == '~'){
        printf("Given character is a special character but not vowel or consonant");
    }
    else {
        printf("The alphabet is a consonant");
    }
    
    return 0;
}