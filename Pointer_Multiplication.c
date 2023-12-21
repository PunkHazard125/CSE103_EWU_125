#include <stdio.h>

int multiply(int *ptr1, int *ptr2) {

    int result = (*ptr1) * (*ptr2);
    return result;

}

int main(void) {

    int num1, num2;

    printf("Enter two numbers:\n");
    scanf("%d %d", &num1, &num2);

    int result = multiply(&num1, &num2);

    printf("Result: %d\n", result);

    return 0;
}
