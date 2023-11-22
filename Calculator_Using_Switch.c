#include <stdio.h>
#include <math.h>

int main() {
    
    int action, num1, num2, result;

    printf("1.Add\n2.Subtract\n3.Multiply\n4.Divide\n5.Modulo\n6.Exit\nEnter (1 - 6): ");
    scanf("%d", &action);

    if (action != 6)
    {
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    switch (action)
    {
    case 1:
        result = num1 + num2;
        printf("Result: %d\n", result);
        break;
    case 2:
        result = num1 - num2;
        printf("Result: %d\n", result);
        break;
    case 3:
        result = num1 * num2;
        printf("Result: %d\n", result);
        break;        
    case 4:
        if (num2 != 0)
        {
            result = num1 / num2;
        printf("Result: %d\n", result);
        }
        else
        {
            printf("Invalid Input\n");
        }
        break;
    case 5:
        result = num1 % num2;
        printf("Result: %d\n", result);
        break;           
    default:
        break;
    }
    }
    else
    {
        printf("Exit!");
    }
        
    return 0;

}
