#include <stdio.h>

int main() {
    float num;
    int times;

    printf("Enter the number to be printed: ");
    scanf("%f", &num);
    printf("Max number of times printed: ");
    scanf("%d", &times);

    for (int i = 1; i <= times; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%.2f", num);
            if (j < i) {
                printf(" ");
            }
        }
        printf("\n");
    }
    for (int i = times - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("%.2f", num);
            if (j < i) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}