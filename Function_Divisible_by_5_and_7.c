#include <stdio.h>

int divisible_by_5_and_7(int num1, int num2) {

    int counter = 0;

    for (int i = num1; i <= num2; i++)
    {
        if (i % 5 == 0 && i % 7 == 0)
        {
            counter++;
        }
    }
    
    return counter;
}

int main(void) {

    int num1, num2;

    printf("Enter two numbers:\n");
    scanf("%d %d", &num1, &num2);

    int result = divisible_by_5_and_7(num1, num2);

    printf("%d number(s) are divisible by 5 and 7 between %d and %d\n", result, num1, num2);

    return 0;
}
