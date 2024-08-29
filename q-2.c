#include <stdio.h>

void inputArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", (arr + i));
    }
}

void printArray(int *arr, int size) {
    printf("Array elements are: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main() {
    int arr[5];
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    if (size > 5) {
        printf("Size exceeds maximum allowed size of %d.\n", 5);
        return 1;
    }

    inputArray(arr, size);

    printArray(arr, size);

    return 0;
}
