#include <stdio.h>
#include <math.h>

int main() {
    
    int num1;
    
    printf("Enter number: ");
    scanf("%d", &num1);
    
    int digit = 0;
    int num2 = num1;
    
    while (num2 > 0)
    {
        num2 = num2 / 10;
        digit++;
    }
    
    num2 = num1;

    int num3 = 0;
    int current_digit;

    for (int i = digit; i > 0; i--)
    {
        current_digit = num2 % 10;
        num3 = (num3 * 10) + current_digit;
        num2 = num2 / 10;
    }
    
    if (num3 == num1)
    {
        printf("%d is a palindrome number\n", num1);
    }
    else
    {
        printf("%d is not a palindrome number\n", num1);
    }
    
    return 0;
}
