#include <stdio.h>

int main() {
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {          // outer loop → rows
        for (int j = 1; j <= i; j++) {      // inner loop → columns
            printf("*");
        }
        printf("\n");                        // move to next line
    }

    return 0;
}
