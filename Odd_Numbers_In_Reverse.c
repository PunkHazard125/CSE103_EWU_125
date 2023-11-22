#include <stdio.h>

int main() {

    int num1, num2;

    printf("Enter 1st Number: ");
    scanf("%d", &num1);
    printf("Enter 2nd Number: ");
    scanf("%d", &num2);

    if (num2 % 2 == 0)
    {
        num2 = num2 - 1;
    }
    while (num2 >= num1)
    {
        printf("%d ", num2);
        num2 = num2 - 2;
    }
    
    return 0;

}
