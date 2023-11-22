#include <stdio.h>
#include <math.h>

int main() {

    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Multiplication Table of %d: \n", number);
    
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", number, i, number * i);
    }
    
    return 0;

}
