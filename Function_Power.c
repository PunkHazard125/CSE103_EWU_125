#include <stdio.h>

int power(int base, int exponent) {

    int result = 1;

    for (int i = 0; i < exponent; i++)
    {
        result = result * base;
    }

    return result;
}

int main(void) {

    int base, exponent;

    printf("Enter Base: ");
    scanf("%d", &base);
    printf("Enter Exponent: ");
    scanf("%d", &exponent);

    int result = power(base, exponent);

    printf("Result: %d\n", result);

    return 0;
}
