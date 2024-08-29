#include <stdio.h>

void swap(int *x, int *y) {
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a, b;

    printf("Enter A value : ");
    scanf("%d",&a);

    printf("Enter B value : ");
    scanf("%d",&b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    swap(&a, &b);

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
