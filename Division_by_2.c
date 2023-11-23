#include <stdio.h>

int main() {
    
    int num;
    
    printf("Enter: ");
    scanf("%d", &num);

    int counter = 0;

    if (num % 2 == 0)
    {
        while (num > 1)
        {
            num = num / 2;
            counter++;
        }
    }
    else
    {
        counter = 0;
    }
    
    printf("%d times\n", counter);
    
    return 0;
}
