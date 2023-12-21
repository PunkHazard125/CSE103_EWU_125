#include <stdio.h>

int main(void) {

    int num1, num2;

    printf("Enter number one: ");
    scanf("%d", &num1);
    printf("Enter number two: ");
    scanf("%d", &num2);

    int *ptr1 = &num1;
    int *ptr2 = &num2;

    int sum = *ptr1 + *ptr2;

    printf("Result: %d\n", sum);

    return 0;
}
