#include <stdio.h>

int main() {
    
    int sum = 0;

    printf("Numbers divisible by 9, between 100 and 200: \n");

    for (int i = 100; i <= 200; i++)
    {
        if (i % 9 == 0)
        {
            printf("%d ", i);
            sum += i;
        }
    }

    printf("\nSum: %d\n", sum);

    return 0;
}
