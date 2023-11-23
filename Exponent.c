#include <stdio.h>
#include <math.h>

int main() {
    
    int base, expo;

    printf("Enter Base as an Integer: ");
    scanf("%d", &base);
    printf("Enter Exponent as an Integer: ");
    scanf("%d", &expo);

    int result = pow(base, expo);

    printf("Result: %d\n", result);
    
    return 0;
}
