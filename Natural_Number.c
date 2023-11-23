#include <stdio.h>

int main() {
    
    int terms;

    printf("Enter how many Terms: ");
    scanf("%d", &terms);

    float result = 1.00;
    int fact = 1;

    for (int i = 1; i <= (terms - 1); i++)
    {
        fact = 1;
        for (int j = 1; j <= i; j++)
        {
            fact = (fact * j);
        }
        result = result + (1.00 / fact);
    }
    
    printf("Result: %.2f\n", result);

    return 0;
}
