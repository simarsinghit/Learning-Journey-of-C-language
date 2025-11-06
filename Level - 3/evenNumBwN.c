#include <stdio.h>
int main() {
    int number;
    
    printf("Enter the number you want the counting start from:");
    scanf("%d",&number);
   
    for(int i = 1 ; i <= number ; i++){
        if(i % 2 == 0){
            printf("%d\n",i);
        }
    }
    

    
    return 0;
}