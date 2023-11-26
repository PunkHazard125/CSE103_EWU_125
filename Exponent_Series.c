#include <stdio.h>
#include <math.h>

int main() {
    
    int x;
    int terms;
    int sum = 0;
    int exponent = 1;
    int result;

    printf("Enter value of x: ");
    scanf("%d", &x);

    printf("Enter how many terms: ");
    scanf("%d", &terms);

    printf("The values of the series:\n");

    for (int i = 1; i <= terms; i++)
    {
        if (i % 2 != 0)
        {
            result = pow(x, exponent);
            printf("%d\n", result);
            sum = sum + result;
            exponent = exponent + 2;
        }
        else
        {
            result = pow(x, exponent);
            printf("-%d\n", result);
            sum = sum - result;
            exponent = exponent + 2;
        }
    }

    printf("The sum: %d\n", sum);
    
    return 0;
}
