#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    int result = abs(number);

    printf("The absolute value of the number is: %d\n", result);

    return 0;
}
