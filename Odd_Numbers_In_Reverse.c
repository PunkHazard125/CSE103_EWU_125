#include <stdio.h>

int main() {

    int num1, num2;

    printf("Enter lower limit: ");
    scanf("%d", &num1);
    printf("Enter higher limit: ");
    scanf("%d", &num2);

    for (int i = num2; i >= num1; i--)
    {
        if (i % 2 != 0)
        {
            printf("%d ", i);
        }
    }
    
    return 0;
}
