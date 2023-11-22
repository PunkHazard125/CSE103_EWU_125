#include <stdio.h>
#include <math.h>

int main() {
    
    int num1, num2;
    
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    int LCM;

    for (int i = 1; ; i++)
    {
        if (i % num1 == 0 && i % num2 == 0)
        {
            LCM = i;
            break;
        }
    }
    
    printf("The LCM of %d and %d is: %d\n", num1, num2, LCM);
    
    return 0;
}
