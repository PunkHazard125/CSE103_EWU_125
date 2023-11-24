#include <stdio.h>

int main() {
    
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    int limit = (num1 < num2) ? num1 : num2;
    int HCF;

    for (int i = 1; i < limit; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            HCF = i;
        }
    }
    
    printf("HCF of %d and %d is: %d\n", num1, num2, HCF);

    return 0;
}
