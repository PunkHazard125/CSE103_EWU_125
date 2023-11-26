#include <stdio.h>

int main() {
    
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    if (num1 == num2)
    {
        printf("The LCM of %d and %d is: %d\n", num1, num2, num1);
    }
    else
    {
        int LCM;
        int high_num = (num1 > num2) ? num1 : num2;
        for (int i = high_num; ; i = i + high_num)
        {
            if (i % num1 == 0 && i % num2 == 0)
            {
                LCM = i;
                printf("The LCM of %d and %d is: %d\n", num1, num2, LCM);
                break;
            }
        }
    }
    
    return 0;
}
