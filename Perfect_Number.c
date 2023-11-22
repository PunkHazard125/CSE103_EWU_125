#include <stdio.h>
#include <math.h>

int main() {
    
    int num;

    printf("Enter number: ");
    scanf("%d", &num);
    
    int sum = 0;

    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum = sum + i;
        }
    }
    
    if (sum == num)
    {
        printf("Perfect Number");
    }
    else
    {
        printf("Not Perfect Number");
    }
    
    return 0;
}
