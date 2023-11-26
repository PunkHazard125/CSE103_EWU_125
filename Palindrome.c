#include <stdio.h>
#include <math.h>

int main() {
    
    int original_num;

    printf("Enter a number: ");
    scanf("%d", &original_num);

    int test_num = original_num;
    int sum = 0;
    int current_digit;

    while (test_num >= 1)
    {
        current_digit = test_num % 10;
        sum = (sum * 10) + current_digit;
        test_num = test_num / 10;
    }
    
    if (sum == original_num)
    {
        printf("%d is a palindrome number\n", original_num);
    }
    else
    {
        printf("%d is not a palindrome number\n", original_num);
    }
    
    return 0;
}
