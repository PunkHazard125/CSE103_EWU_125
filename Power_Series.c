#include <stdio.h>
#include <math.h>

int main() {
    
    int num, terms;
    
    printf("Enter number: ");
    scanf("%d", &num);
    printf("Enter terms: ");
    scanf("%d", &terms);

    int sum = 0;
    int counter = 1;

    for (int i = 1; counter <= terms; i = i + 2)
    {
        if (counter % 2 != 0)
        {
            sum = sum + pow(num, i);
        }
        else
        {
            sum = sum - pow(num, i);
        }
        counter++;
    }
    
    printf("Sum: %d\n", sum);

    return 0;
}
