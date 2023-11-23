#include <stdio.h>

int main() {
    
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    int fact = 1;

    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    
    printf("Factorial: %d\n", fact);
    
    return 0;
}
