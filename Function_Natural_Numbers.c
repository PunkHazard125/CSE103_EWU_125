#include <stdio.h>

int natural_sum(int N) {

    if (N == 1)
    {
        return 1;
    }
    else
    {
        return N + natural_sum(N - 1);
    }
}

int main(void) {

    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    int sum = natural_sum(num);

    printf("Sum: %d\n", sum);

    return 0;
}
