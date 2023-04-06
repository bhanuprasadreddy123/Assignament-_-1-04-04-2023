#include <stdio.h>

int main() {
    int arr[11];
    int i, j, temp;
    int n = 0;
    for (i = 0; i < 11; i++) {
        arr[i] = n;
        n += 3;
    }
    printf("Ascending Order:\n");
    for (i = 0; i < 11; i++) {
        for (j = i + 1; j < 11; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Descending Order:\n");
    for (i = 0; i < 11; i++) {
        for (j = i + 1; j < 11; j++) {
            if (arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}