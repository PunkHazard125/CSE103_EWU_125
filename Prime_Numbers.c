#include <stdio.h>
#include <math.h>

int main() {
    
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    int flag = 1;

    printf("Prime numbers between %d and %d are:\n", num1, num2);
    
    for (int i = num1; i <= num2; i++)
    {
        flag = 1;
        if (i <= 1)
        {
            continue;
        }
        else
        {
            for (int j = 2; j < i; j++)
            {
                if (i % j == 0)
                {
                    flag = 0;
                    break;
                }
            }
            if (flag == 1)
            {
                printf("%d ", i);
            }
        }
    }
    
    return 0;
}
