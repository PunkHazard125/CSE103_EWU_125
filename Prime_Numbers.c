#include <stdio.h>

int main() {
    
    int low, high;

    printf("Enter lower limit: ");
    scanf("%d", &low);
    printf("Enter higher limit: ");
    scanf("%d", &high);

    int is_prime = 1;

    printf("The prime numbers between %d and %d are: \n", low, high);

    for (int i = low; i <= high; i++)
    {
        is_prime = 1;
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
                    is_prime = 0;
                }
            }
        }
        if (is_prime == 1)
        {
            printf("%d ", i);
        }
    }

    return 0;
}
